#include "Harl.hpp"

Harl::Harl(){};
void Harl::debug(void)
{
	std::cout<<"[ DEBUG ]"<<std::endl;
	std::cout <<"I love having extra bacon on my burger. It makes everything better!"<<std::endl;
}
void Harl::info(void)
{
	std::cout<<"[ INFO ]"<<std::endl;
	std::cout <<"I cannot believe extra bacon costs more money. You didn't put enough in my burger!"<<std::endl;
}
void Harl::warning(void)
{
	std::cout<<"[ WARNING ]"<<std::endl;
	std::cout <<"I think I deserve free extra bacon. I've been coming here for years!"<<std::endl;
}
void Harl::error(void)
{
	std::cout<<"[ ERROR ]"<<std::endl;
	std::cout <<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}
void Harl::complain(std::string level)
{
	int i = 0;
	std::string msg[4]={"DEBUG","INFO","WARNING","ERROR"};
	void (Harl::*functions[4])(void)={&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
	while(i <= 3 && msg[i] != level)
		i++;
	switch(i)
	{
		case 0:
			(this->*functions[0])();
		case 1:
			(this->*functions[1])();
		case 2:
			(this->*functions[2])();
		case 3:
			(this->*functions[3])();
			break;
		default:
			std::cout << "[ Invalid level: Harl does not understand this kind of complaint. ]" << std::endl;
			break;
	}
}
