/**
 * @file borne.cpp
 * @brief Programme principal de gestion de la borne de recharge
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"
#include<donnees.h>
#include<mem_sh.h>

#include "lecteurcarte.h"
#include "baseclient.h"
#include "charge.h"
#include <unistd.h>


int main()
{
	int CarteLue,user=0,choix=0; //< Variables relatives au lecteur de carte
	int time=0; //< Stockage du temps pour les timers
	int shmid; //< Accès mémoire
	int currentuser; //< Variable stockant l'utilisateur actuel pour la reprise du véhicule
	entrees * io; //< Accès mémoire
	io=acces_memoire(&shmid); //< Accès mémoire
  	

    LecteurCarte lecteurcarte;
	BaseClient ListeClient;
	Voyants voyant;
	Timers timer;
	
    while (1)
    {
        //Début du programme et gestion du lecteur de carte
		cout<<"Inserez votre carte"<<endl;
        lecteurcarte.initialiser();
        lecteurcarte.lire_carte();
        CarteLue=lecteurcarte.GetNumCarte();
        user=ListeClient.identifier(CarteLue);
        if(user != -1)
        {
        	cout<<"user: "<<ListeClient.GetNom(user)<<" "<<ListeClient.GetPrenom(user)<<" identifié avec succès"<<endl;
		currentuser=user;
        	if(ListeClient.GetSU(user)==1)
        	{
        		cout<<"Pour ajouter taper 1 |  Pour effacer taper 2 |0 pour retour :"<<endl;
        		cin>>choix;
        		switch(choix)
        		{
        			case(1):
        				ListeClient.ajouter();
        				choix=0;
        				break;
        			case(2):
        			cout<<"Quel client retirer ?"<<endl;
        			cin>>choix;
        				ListeClient.retirer(choix);
        				choix=0;
        				break;
        			
        		}
        	
        	}
		else{

	//Début de la partie sur la borne simulée
	voyant.SetCharge(VERT);

	timer.raz();
	while (io -> bouton_charge!=1 || time>=10){
	time=timer.GetValue();
	}
		

	if(time<10){
		voyant.SetDispo(OFF); //Gestion des LEDS
		voyant.SetCharge(ROUGE);
		voyant.SetTrappe(VERT);
		io->gene_pwm=DC; //io->gene_u=12;
		while((io->gene_u)!=9)
		sleep(1);// Processeur trop rapide donc on met des sleep 
		voyant.SetTrappe(OFF);
		voyant.SetPrise(VERT);
		sleep(1);
		io->gene_pwm=AC_1K;
		sleep(1);
	sleep(1);
	io->contacteur_AC=1;
	io->gene_pwm=AC_CL;

	sleep(1);

	while((io->gene_u)!=9){
		sleep(1);// proco trop rapide 
		std::cout<<"En charge..."<<std::endl;
		
		if(io->bouton_stop==1)
		io->gene_u=9;
	}
	io->contacteur_AC=0;
	io->gene_pwm=DC;
	io->gene_u=9;
	voyant.SetCharge(VERT);
	sleep(1);
	
	//Reprise du véhicule ne fonctionne pas à cause d'un problème sur l'initialisation/libération des ports
	/*lecteurcarte.initialiser();
	attente_insertion_carte();
	do{
	lecteurcarte.initialiser();
	lecteurcarte.lire_carte();
        CarteLue=lecteurcarte.GetNumCarte();
	}while(CarteLue!=currentuser);*/

	voyant.SetTrappe(VERT);
	while((io->gene_u)!=12)
	sleep(1);// proco trop rapide 
	
	std::cout<<"Vroum Vroum"<<std::endl;
	voyant.SetTrappe(OFF);
	voyant.SetPrise(OFF);
	voyant.SetCharge(OFF);
	voyant.SetDispo(VERT);


	timer.raz();
	}

	else{
		voyant.SetDispo(VERT);
		voyant.SetCharge(OFF);
	}
	
	
    }

        	
        }
        else
        	{
        		cout<<"Vous n'étes pas enregistré, contacter un Administrateur."<<endl;
        	}
	
}

}
