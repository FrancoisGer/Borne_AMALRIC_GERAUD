/**
 * @file Timers.cpp
 * @brief Programme de gestion des timers
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include"Timers.h"

/**
 * @brief Construct a new Timers:: Timers object
 * 
 */
Timers::Timers()
{
	_value=0;
	io=acces_memoire(&shmid);
	if (io==NULL) printf("Erreur pas de mem sh\n");
	depart_timer=io->timer_sec;
}
/**
 * @brief Remise à zéro du timer
 * 
 */
void Timers::raz()
{
	_value=io->timer_sec;
}
/**
 * @brief Retourne la valeur en seconde du timer
 * 
 * @return int 
 */
int Timers::GetValue()
{
	_value=io->timer_sec-depart_timer;
	return _value;
}
