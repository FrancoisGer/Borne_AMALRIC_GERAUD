/**
 * @file Client.cpp
 * @brief Programme de gestion des clients
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include"Client.h";

/**
 * @brief Construct a new Client:: Client object
 * 
 * @param Number 
 * @param Name 
 * @param prenom 
 * @param Code 
 * @param Suser 
 */
Client::Client(int Number,string Name,string prenom,int Code, int Suser)
{
	Numero = Number;
	Nom = Name;
	Prenom=prenom;
	MDP = Code
	SU=Suser;
}
/**
 * @brief Get Numéro du client
 * 
 */
void Client::GetNumero()
{
	return Numero;
}
/**
 * @brief Get Nom du client
 * 
 */
void Client::GetNom()
{
	return Nom;
}
/**
 * @brief Get Prénom du client
 * 
 */
void Client::GetPrenom()
{
	return Prenom;
}
/**
 * @brief Get Mot de passe du client
 * 
 */
void Client::GetMDP()
{
	return MDP;
}
/**
 * @brief Get client Super User ou non
 * 
 */
void Client::GetSU()
{
	return SU;
}
