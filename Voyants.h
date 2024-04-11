#ifndef VOYANTS_H
#define VOYANTS_H

#include <memoire_borne.h>
#include <donnees_borne.h>
#include<donnees.h>
#include<mem_sh.h>
#include<iostream>

using namespace std;

class Voyants
{
  private:
  	entrees * io;
	int shmid;
  
  public: 
  	Voyants();
	void BlinkCharge(led couleur);
	void SetCharge(led couleur);
	void BlinkPrise(led couleur);
	void SetPrise(led couleur);
	void BlinkTrappe(led couleur);
	void SetTrappe(led couleur);
	void BlinkDefaut(led couleur);
	void SetDefaut(led couleur);
	void BlinkDispo(led couleur);
	void SetDispo(led couleur);
};

#endif // VOYANTS_H
