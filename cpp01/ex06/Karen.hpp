#include <iostream>
#include <string.h>

#ifndef KAREN_H
#define KAREN_H

class Karen
{
	

private:
	int		level_int;
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