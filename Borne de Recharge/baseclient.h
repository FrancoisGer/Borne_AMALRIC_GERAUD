/**
 * @file baseclient.h
 * @brief Fichier bibliothèque de la base client
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef BASECLIENT_H
#define BASECLIENT_H


#include<iostream>
#include<vector>

using namespace std;

/**
 * @brief Implémentation des attributs et méthodes de la classe BaseClient
 * 
 */
class BaseClient
{
  private:
  	vector<int> Numero; //< Numéro du client 
  	vector<int> MDP; //<  Mot de passe du client
  	vector<int> SU; //< Client Super User ou non
  	vector<string> Nom; //< Nom du client
  	vector<string> Prenom; //<  Prénom du client
  	
  	int NombreClient; //< Nombre de clients
  
  public :
  	BaseClient();
	int identifier(int Cartelue);
	void ajouter();
	void retirer(int numCarte);
	string GetNom(int i);
	string GetPrenom(int i);
	int GetSU(int i);
};

#endif // BASECLIENT_H
