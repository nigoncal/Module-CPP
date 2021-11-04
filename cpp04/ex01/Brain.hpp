#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	public:

	Brain(void);
	Brain(Brain const &copy);
	Brain &operator=(Brain const &copy);
	virtual ~Brain(void);

	void addIdea(std::string idea);
	std::string getIdea(int index);
	void deleteIdea(int index);
	void showIdeas(void);

	static const int MAX_IDEAS = 100;

	private:
		std::string ideas[MAX_IDEAS];
};

#endif