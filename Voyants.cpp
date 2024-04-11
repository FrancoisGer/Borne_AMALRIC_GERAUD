#include "Voyants.h"
#include <unistd.h>

Voyants::Voyants()
{
	io=acces_memoire(&shmid);
	if(io==NULL)
	printf("erreur pas de mem sh\n");
}


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

void Voyants::BlinkDispo(led couleur){
	int i;	
	for(i=0;i<4;i++){
	SetDispo(couleur);
	sleep(1);
	SetDispo(OFF);
	sleep(1);
	}

}

void Voyants::SetDispo(led couleur)
{
	io->led_dispo=couleur;
}

void Voyants::BlinkPrise(led couleur){
	int i;	
	for(i=0;i<4;i++){
	SetPrise(couleur);
	sleep(1);
	SetPrise(OFF);
	sleep(1);
	}

}

void Voyants::SetPrise(led couleur)
{
	io->led_prise=couleur;
}

void Voyants::BlinkTrappe(led couleur){
	int i;	
	for(i=0;i<4;i++){
	SetTrappe(couleur);
	sleep(1);
	SetTrappe(OFF);
	sleep(1);
	}

}

void Voyants::SetTrappe(led couleur)
{
	io->led_trappe=couleur;
}

void Voyants::BlinkDefaut(led couleur){
	int i;	
	for(i=0;i<4;i++){
	SetDefaut(couleur);
	sleep(1);
	SetDefaut(OFF);
	sleep(1);
	}

}

void Voyants::SetDefaut(led couleur)
{
	io->led_defaut=couleur;
}
