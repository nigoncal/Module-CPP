#include<string>

class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon(void);
	const std::string		get_type(void) const;
	bool					set_type(const std::string &newType);

	private :
		std::string _type;
};