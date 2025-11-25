#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* new myzombie[N];
	for(int i=0; i<N; i++)
	{
		myzombie[i]->setnume(name);
	}
	return(myzombie);
}