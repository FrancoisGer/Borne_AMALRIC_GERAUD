/**
 * @file client.h
 * @brief Fichier bibliothèque de la gestion des clients
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef BASECLIENT_H
#define BASECLIENT_H

#include<iostream>
#include<vectors>

using namespace std;

/**
 * @brief Implémentation des attributs et méthodes de la classe Client
 * 
 */
class Client
{
  private:
  	string Nom,Prenom;
  	int Numero,MDP,SU;
  
  public : 
	Client(int Number,string Name,string prenom,int Code, int Suser); 
	void GetNumero();
	void GetNom();
	void GetPrenom();
	void GetMDP();
	void GetSU();
};

#endif // BASECLIENT_H
