#include"baseclient.h"


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

string BaseClient::GetNom(int i)
{
	return Nom[i];
}

string BaseClient::GetPrenom(int i)
{
	return Prenom[i];
}
int BaseClient::GetSU(int i)
{
	return SU[i];
}


