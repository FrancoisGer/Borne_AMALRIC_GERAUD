/**
 * @file lecteurcarte.h
 * @brief Fichier bibliothèque du lecteur de carte
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef LECTEURCARTE_H
#define LECTEURCARTE_H
#include <lcarte.h>
#include<iostream>

using namespace std;

/**
 * @brief Implémentation des attributs et méthodes de la classe LecteurCarte
 * 
 */
class LecteurCarte
{
  private:
  int _NumCarte;
  
  public: 
	void initialiser();
	void lire_carte();
	int GetNumCarte();
};

#endif // LECTEURCARTE_H
