/**
 * @file voyants.h
 * @brief Fichier bibliothèque des voyants
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef VOYANTS_H
#define VOYANTS_H

#include <memoire_borne.h>
#include <donnees_borne.h>
#include<donnees.h>
#include<mem_sh.h>
#include<iostream>

using namespace std;


/**
 * @brief Implémentation des attributs et méthodes de la classe Voyants
 * 
 */
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
