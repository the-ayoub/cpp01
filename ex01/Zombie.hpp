#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void setname(std::string _name);
		void announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif