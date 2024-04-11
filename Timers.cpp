#include"Timers.h"

Timers::Timers()
{
	_value=0;
	io=acces_memoire(&shmid);
	if (io==NULL) printf("Erreur pas de mem sh\n");
	depart_timer=io->timer_sec;
}

void Timers::raz()
{
	_value=io->timer_sec;
}
int Timers::GetValue()
{
	_value=io->timer_sec-depart_timer;
	return _value;
}
