#ifndef LECTEURCARTE_H
#define LECTEURCARTE_H
#include <lcarte.h>
#include<iostream>

using namespace std;

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
