/**
 * @file Voyants.cpp
 * @brief Programme de gestion des voyants
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "Voyants.h"
#include <unistd.h>

/**
 * @brief Construct a new Voyants:: Voyants object
 * 
 */
Voyants::Voyants()
{
	io=acces_memoire(&shmid);
	if(io==NULL)
	printf("erreur pas de mem sh\n");
}

/**
 * @brief Fait clignoter la led Charge
 * 
 * @param couleur 
 */
void Voyants::BlinkCharge(led couleur){
	int i;	
	for(i=0;i<4;i++){
	SetCharge(couleur);
	sleep(1);
	SetCharge(OFF);
	sleep(1);
	}

}

void Voyants::SetCharge(led couleur)
{
	io->led_charge=couleur;
}

/**
 * @brief Fait clignoter la led Dispo
 * 
 * @param couleur 
 */
void Voyants::BlinkDispo(led couleur){
	int i;	
	for(i=0;i<4;i++){
	SetDispo(couleur);
	sleep(1);
	SetDispo(OFF);
	sleep(1);
	}

}

/**
 * @brief Donne une couleur fixe à la led Dispo
 * 
 * @param couleur 
 */
void Voyants::SetDispo(led couleur)
{
	io->led_dispo=couleur;
}

/**
 * @brief Fait clignoter la led Prise
 * 
 * @param couleur 
 */
void Voyants::BlinkPrise(led couleur){
	int i;	
	for(i=0;i<4;i++){
	SetPrise(couleur);
	sleep(1);
	SetPrise(OFF);
	sleep(1);
	}

}

/**
 * @brief Donne une couleur fixe à la led Prise
 * 
 * @param couleur 
 */
void Voyants::SetPrise(led couleur)
{
	io->led_prise=couleur;
}

/**
 * @brief Fait clignoter la led Trappe
 * 
 * @param couleur 
 */
void Voyants::BlinkTrappe(led couleur){
	int i;	
	for(i=0;i<4;i++){
	SetTrappe(couleur);
	sleep(1);
	SetTrappe(OFF);
	sleep(1);
	}

}

/**
 * @brief Donne une couleur fixe à la led Trappe
 * 
 * @param couleur 
 */
void Voyants::SetTrappe(led couleur)
{
	io->led_trappe=couleur;
}

/**
 * @brief Fait clignoter la led Defaut
 * 
 * @param couleur 
 */
void Voyants::BlinkDefaut(led couleur){
	int i;	
	for(i=0;i<4;i++){
	SetDefaut(couleur);
	sleep(1);
	SetDefaut(OFF);
	sleep(1);
	}

}
/**
 * @brief Donne une couleur fixe à la led Defaut
 * 
 * @param couleur 
 */
void Voyants::SetDefaut(led couleur)
{
	io->led_defaut=couleur;
}
