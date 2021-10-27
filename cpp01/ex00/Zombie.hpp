#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie
{

	public:

		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
		Zombie* randomChump(void);

	private :
		std::string _name;
};

void randomChump( std::string name );
Zombie *newZombie(std::string name);

#endif
