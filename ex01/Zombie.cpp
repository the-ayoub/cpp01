#include "Zombie.hpp"

Zombie::Zombie()
{}
Zombie::~Zombie()
{}
void Zombie::setname(std::string _name)
{
	name = _name;
}
void Zombie::announce()
{
	std::cout <<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}