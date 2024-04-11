#ifndef CHARGE_H
#define CHARGE_H

#include <memoire_borne.h>
#include <donnees_borne.h>
#include <donnees.h>
#include <mem_sh.h>
#include <iostream>
#include "lecteurcarte.h"
#include "Voyants.h"
#include "Timers.h"

using namespace std;

class Charge {

   private:
  	entrees * io;
	int shmid;
   public:
      Charge();
      void Chargement();

};

#endif
