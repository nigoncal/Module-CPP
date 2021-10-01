#include "contact.hpp"
#include <iomanip>

std::string resize_string (std::string src)
{
	if(src.size() > 9)
	{
		src.resize(9);
		src.append(".");
	}
	return(src);
}

void	function_search(contact *list, int i)
{
	int index;
	std::string buffer; 
	index = 0;
			if(i == 0)
				std::cout<<"no contact"<<std::endl;
			else
			{
				std::cout<<"|"<<std::setw(10)<<"index";
				std::cout<<"|"<<std::setw(10)<<"first_name";
				std::cout<<"|"<<std::setw(10)<<"last_name";
				std::cout<<"|"<<std::setw(10)<<"nick_name"<<"|"<<std::endl;
				for(int j = 0; j != i; j++)
				{
					std::cout<<"|"<<std::setw(10)<<j + 1;
					std::cout<<"|"<<std::setw(10)<<resize_string(list[j].get_first_name());
					std::cout<<"|"<<std::setw(10)<<resize_string(list[j].get_last_name());
					std::cout<<"|"<<std::setw(10)<<resize_string(list[j].get_nickname())<<"|"<<std::endl;
				}
					std::cout<<std::endl<<"index : ";
					std::cin.ignore();
					std::getline(std::cin, buffer);
					index = atoi(buffer.c_str());
					if((index >= 1 && index <= 8) && buffer.size() == 1 && index <= i)
						list[index - 1].print_attribute();
					else
					{
						std::cout<<"erreur index"<<std::endl;
						std::cout<<buffer.size()<<std::endl;
						std::cout<<buffer[0]<<std::endl;
						std::cout<<index<<std::endl;
					}
			}
}

int main ()
{
	bool status = true;
	std::string get_string;
	contact list[8];
	int i;
	i = 0;

	while(status)
	{
		std::cin>>get_string;
		if(!get_string.compare("EXIT"))
		{
			std::cout<<"see you soon !"<<std::endl;
			return(0);
		}
		if(!get_string.compare("ADD"))
		{
			if(i != 8)
			{
				list[i].set_attribute();
				i++;
			}
			else
				std::cout<<"contact full !"<<std::endl;
		}
		if(!get_string.compare("SEARCH"))
			function_search(list, i );
	}

}
