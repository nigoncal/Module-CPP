#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie
{

	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void		announce(void);

		std::string	getName(void);
		void		SetName(std::string name);

	private :
		std::string name;
		
};


#endif
