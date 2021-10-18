
#include "Karen.hpp"

	void Karen::complain(std::string level)
	{
		std::string store_level[4] = 
		{
			"ERROR",
			"WARNING",
			"INFO"
			"DEBUG",
		};
		for(int i = 0; i != 3; i++)
		{
			if(level == store_level[i])
			{
				this->level_int = i;
				break;
			}
		}
		switch (this->level_int)
		{

			case 0 :
			{
				this->Karen::error();
				break;
			}

			case 1 :
			 
				this->Karen::warning();
				this->Karen::error();
					break;

			 case 2 :
				this->Karen::error();
				this->Karen::warning();
				this->Karen::info();
					break;
			 
			 case 3 :
				this->Karen::error();
				this->Karen::warning();
				this->Karen::info();
				this->Karen::debug();
					break;
			default :
				std::cout<<"[ Probably complaining about insignificant problems ]";

		}
	
	}

	Karen::Karen(void)
	{
		this->level_int = -1;
	}

	Karen::~Karen(void)
	{
	}

	void Karen::debug(void)
	{
		std::cout	<<"[- DEBUG -]"<<std::endl
					<<"I love to get extra bacon for my"
					<<"7XL-double-cheese-triple-pickle-special-ketchup burger."
					<<"I just love it!"<<std::endl<<std::endl;
	}
	void Karen::info(void)
	{
		 std::cout	<<"[- INFO -]"<<std::endl
		 			<<"I cannot believe adding extra"
		 			<<"bacon cost more money. You don’t put enough!"
					<<" If you did I would not have to ask for it!"<<std::endl<<std::endl;
	}
	void Karen::warning(void)
	{
		 std::cout	<<"[- WARNING -]"<<std::endl
					<<"I think I deserve to have some extra bacon for free."
					<< "I’ve been coming here for years and you just started"
					<< "working here last month."<<std::endl<<std::endl;
	}
	void Karen::error(void)
	{
		 std::cout	<< "[- ERROR -]"<<std::endl
					<< "This is unacceptable,"
					<< "I want to speak to the manager now."<<std::endl<<std::endl;
	}
