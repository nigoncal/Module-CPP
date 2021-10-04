#include <string>
#include <iostream>

class contact
{
	public :
		void print_attribute() const;
		void set_attribute();
		std::string show_contact() const;
		
		std::string get_first_name() const; 
		std::string get_last_name() const;
		std::string get_nickname() const;
		std::string get_phone_number() const;
		std::string get_darkest_secret() const;

	private :

		std::string _first_name;
		std::string	_last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};