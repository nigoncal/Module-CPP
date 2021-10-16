#include <iostream>

#ifndef KAREN_H
#define KAREN_H

class Karen
{
	typedef void (Karen:: *ptr)(void);

private:
	std::string ptrList[4];
	void 	debug(void);
	void 	info(void);
	void 	warning(void);
	void 	error(void);

public:
	void complain(std::string level);
		Karen(void);
		~Karen(void);
};

#endif