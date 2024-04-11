#include "charge.h"
#include "Voyants.h"
#include "Timers.h"
#include "baseclient.h"

void Charge::Chargement(){
		


		int CarteLue,user=0,choix=0;
	int time=0;
	int shmid;
	int currentuser;
	entrees * io;
	io=acces_memoire(&shmid);


    	LecteurCarte lecteurcarte;
	BaseClient ListeClient;
	Voyants voyant;
	Timers timer;

	timer.raz();
	while (io -> bouton_charge!=1 || time>=10){
	time=timer.GetValue();
	}
		

	if(time<10){
		voyant.SetDispo(OFF); //Gestion des LEDS
		voyant.SetCharge(ROUGE);
		voyant.SetTrappe(VERT);
		io->gene_pwm=DC; //io->gene_u=12;
		while((io->gene_u)!=9);
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


