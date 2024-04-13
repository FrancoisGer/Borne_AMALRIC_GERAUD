/**
 * @file lecteurcarte.cpp
 * @brief Programme de gestion du lecteur de carte
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "lecteurcarte.h"

void LecteurCarte::initialiser()
{
	initialisations_ports(); //initialisation des ports du lecteur de carte
}

void LecteurCarte::lire_carte()
{
	_NumCarte=0;
	attente_insertion_carte(); //attente de l'insertion d'une carte
	if(carte_inseree()) // si la carte est inserée
	{
		_NumCarte=lecture_numero_carte(); // récupération du numéro de la carte
	}
	cout<<"numéro lu:"<<_NumCarte<<endl; // affichage du numéro de la carte
	attente_retrait_carte();
	liberation_ports();
}
int LecteurCarte::GetNumCarte()
{
	return _NumCarte;

}
