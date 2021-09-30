#include <string>
#include <iostream>

class contact
{
	public :
		std::string show_contact() const;
		void print_attribute() const;
		
	
		std::string get_first_name() const; 
		std::string get_last_name() const;
		std::string get_nickname() const;
		std::string get_phone_number() const;
		std::string get_darkest_secret() const;
		void set_attribute();

	private :

		std::string _first_name;
		std::string	_last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};