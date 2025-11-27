#include "Zombie.hpp"

int main()
{
	Zombie *myzombie; 
	myzombie = zombieHorde(5, "PatasLocas");
	for (int i =0; i < 5; i++)
		myzombie[i].announce();
	delete[] myzombie;
}
