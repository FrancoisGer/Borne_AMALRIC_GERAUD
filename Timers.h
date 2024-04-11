#ifndef TIMERS_H
#define TIMERS_H

#include <memoire_borne.h>
#include <donnees_borne.h>
#include <donnees.h>
#include <mem_sh.h>
#include <iostream>

using namespace std;

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
