#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Cat catSource;
	Cat catDest(catSource);
	
std::cout<<std::endl<<"catSource brain adress:"<<catSource.getBrain()<<std::endl;
std::cout<<std::endl<<"catDest brain adress:"<<catDest.getBrain()<<std::endl;
std::cout<<std::endl<<"catSource type :"<<catSource.getType()<<std::endl;
std::cout<<std::endl<<"CatDest type :"<<catDest.getType()<<std::endl;
catDest.setType("saucison");
std::cout<<std::endl<<"catSource type :"<<catSource.getType()<<std::endl;
std::cout<<std::endl<<"CatDest type :"<<catDest.getType()<<std::endl;

// je peux changer le type sans que ça affecte la source grace au new

	std::cout<<std::endl;
	int index = 0;
	Animal *animals[10];// = new Animal[10];
			std::cout<<std::endl;

	while (index < 10) {
		if (index < 5)
		{
			animals[index] = new Dog();
			std::cout<<std::endl;
		}
		else
		{
			animals[index] = new Cat();
			std::cout<<std::endl;
			
		}
		index++;
	}

	std::cout<<std::endl;
	index = 0;
	std::cout<<std::endl;
	while(index < 10)
	{
		std::cout<<std::endl<<index<<std::endl;
		delete animals[index];
		index++;
	}
	std::cout<<"test correc"<<std::endl<<std::endl;
	Dog basic;
	{
		std::cout << std::endl << "coucou1" << std::endl;
		Dog tmp;
		tmp = basic;
		tmp.setType("not a dog");
		std::cout << "coucou2" << std::endl << std::endl;
	}
	std::cout << basic.getType() << std::endl;
	basic.makeSound();
	std::cout<<std::endl;
	std::cout<<std::endl;
	//delete [] animals;

/*	delete j;//should not create a leak
	delete i;*/
}