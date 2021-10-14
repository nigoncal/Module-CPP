#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring>

int main(int c, char **v)
{
    if (c != 4)
    {
        std::cout << "Bad nbr of arguments." << std::endl;
        return 0;
    }
    std::ifstream in(v[1]);
    if (!in)
    {
        std::cout << "Cannot open file." << std::endl;
        return (0);
    }
    std::ofstream out((v[1] + std::string(".replace")).c_str());
    if (!out)
    {
        std::cout << "Cannot create file." << std::endl;
        return (0);
    }
    std::string line;
    size_t position = 0;
    int size = std::strlen(v[2]);
    while (std::getline(in, line))
    {
        while (1)
        {
            position = line.find(v[2]);
            if (position == std::string::npos)
                break;
            else
                line.replace(position, size, v[3]);
        }
        out << line << std::endl;
    }
    return (0);
}