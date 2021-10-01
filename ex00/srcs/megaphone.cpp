#include <iostream>

int main (int argc, char **argv)
{
	int i;

	i = 1;
	if(argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	else
		while(i != argc)
		{
			for(int j = 0; argv[i][j] != '\0'; j++)
				std::cout<<(char)toupper(argv[i][j]);
			i++;
		}
	std::cout<<std::endl;
}