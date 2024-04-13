/**
 * @file timers.h
 * @brief Fichier bibliothèque des timers
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef TIMERS_H
#define TIMERS_H

#include <memoire_borne.h>
#include <donnees_borne.h>
#include <donnees.h>
#include <mem_sh.h>
#include <iostream>

using namespace std;

/**
 * @brief Implémentation des attributs et méthodes de la classe Timers
 * 
 */
class Timers
{
  private:
  int _value=0;
  int depart_timer;
  entrees * io;
  int shmid;
  
  public: 
	Timers();
	void raz();
	int GetValue();
};

#endif // TIMERS_H
