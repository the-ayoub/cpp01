#include "Zombie.hpp"

int main()
{
	Zombie *myzombie;
	std::string name1 = "PatasLocas";
	std::string name2 = "ChispasZombie";
	randomChump(name1);
	myzombie = newZombie(name2);
	myzombie->announce();
	delete myzombie;
}