#include "Zombie.hpp"

Zombie::Zombie()
{}
Zombie::~Zombie()
{
	std::cout <<name<<" has been destroyed"<<std::endl;
}
void Zombie::setname(std::string _name)
{
	name = _name;
}
void Zombie::announce()
{
	std::cout <<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}