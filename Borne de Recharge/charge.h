/**
 * @file charge.h
 * @brief Fichier bibliothèque de la charge
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef CHARGE_H
#define CHARGE_H

#include <memoire_borne.h>
#include <donnees_borne.h>
#include <donnees.h>
#include <mem_sh.h>
#include <iostream>
#include "lecteurcarte.h"
#include "Voyants.h"
#include "Timers.h"

using namespace std;

/**
 * @brief Implémentation des attributs et méthodes de la classe Charge
 * 
 */
class Charge {

   private:
  	entrees * io;
	int shmid;
   public:
      Charge();
      void Chargement();

};

#endif
