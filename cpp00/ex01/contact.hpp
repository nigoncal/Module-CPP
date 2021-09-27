#include <string>
#include <iostream>

class contact
{
	public :
	
	int get_first_name() const; 
	int get_last_name() const;
	int get_nickname() const;
	int get_phone_number() const; 
	int get_darknest_secret() const;
	
	std::string set_first_name();
	std::string set_last_name();
	std::string set_nickname();
	std::string set_phone_number();
	std::string set_darknest_secret();

	private:

	std::string first_name;
	std::string	last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};