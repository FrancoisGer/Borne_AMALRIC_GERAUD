/**
 * @file baseclient.cpp
 * @brief Programme implémentant la base client
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include"baseclient.h"

/**
 * @brief Construct a new Base Client:: Base Client object
 * 
 */
BaseClient::BaseClient()
{
	NombreClient=2;
	Numero.push_back(24);
	Numero.push_back(31);
	MDP.push_back(1234);
	MDP.push_back(5678);
	SU.push_back(0);
	SU.push_back(1);
	Nom.push_back("AMALRIC");
	Nom.push_back("GERAUD");
	Prenom.push_back("Pierre");
	Prenom.push_back("François");
	
}


/**
 * @brief Fonction pour identifier un utilisateur de la base client
 * 
 * @param Cartelue 
 * @return int 
 */
int BaseClient::identifier(int Cartelue)
{
	int CodeSaisi=0;
	for(int i=0;i<NombreClient;i++)
	{
		if(Cartelue==Numero[i])
		{
			cout<<"Entrez le code: "<<endl;
			cin>>CodeSaisi;
			//cout<<"votre code: "<<CodeSaisi<<endl;
			
			//cout<<"Le code en memoire"<<MDP[i]<<endl;
			if(CodeSaisi==MDP[i])
			{
				//cout<<"Vous etes l element:"<<i<<endl;	
				return i;
			}
				
		}
		
	}
	return -1;
}

/**
 * @brief Fonction pour ajouter un utilisateur à la base client
 * 
 */
void BaseClient::ajouter()
{
	int num,code,su;
	string nom,prenom;
	
	cout<<"Num de carte: "<<endl;
	cin>>num;
	Numero.push_back(num);
	
	cout<<"Nom client: "<<endl;
	cin>>nom;
	Nom.push_back(nom);
	
	cout<<"Prenom client: "<<endl;
	cin>>prenom;
	Prenom.push_back(prenom);
	
	cout<<"Code client: "<<endl;
	cin>>code;
	MDP.push_back(code);
	
	cout<<"SU ? "<<endl;
	cin>>su;
	SU.push_back(su);
	
	NombreClient++; 
	cout<<"Client ajouté avec succès !"<<endl;
	
}

/**
 * @brief Fonction pour supprimer un utilisateur de la base client
 * 
 * @param numCarte 
 */
void BaseClient::retirer(int numCarte)
{
	for(int i=0;i<NombreClient;i++)
	{
		if(numCarte==Numero[i])
		{
			Nom[i]=" ";
			Prenom[i]=" ";
			MDP[i]=0;
			SU[i]=0;
			Numero[i]=0;
				
		}
		
	}
	cout<<"Client retire avec succès !"<<endl;
}

/**
 * @brief Get Nom de la base client
 * 
 * @param i 
 * @return string 
 */
string BaseClient::GetNom(int i)
{
	return Nom[i];
}
/**
 * @brief Get Prénom de la base client
 * 
 * @param i 
 * @return string 
 */
string BaseClient::GetPrenom(int i)
{
	return Prenom[i];
}
/**
 * @brief Get Super User de la base client
 * 
 * @param i 
 * @return int 
 */
int BaseClient::GetSU(int i)
{
	return SU[i];
}


