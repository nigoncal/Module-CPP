/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:18:19 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/16 15:26:32 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring>


int verif_space(std::string s1)
{
    int i = -1;
    while (s1[++i])
    {
        if (s1[i] != ' ')
            return (0);
    }
    return (1);
}

int main (int ac, char **av)
{
    std::string Filename;
    std::string str;
    std::string buffer;
    std::string s1;
    std::string s2;
    size_t	end_pos = 0;
	size_t	first_pos = 0;
    if (ac != 4)
    {
        std::cerr << "Error: ./replace (filename) (s1) (s2)" << std::endl;
        return (1);
    }
    Filename = av[1];
    s1 = av[2];
    s2 = av[3];
    if (Filename.empty() == true || s1.empty() == true || s2.empty() == true
    || verif_space(s1) == 1 || verif_space(s2) == 1 || verif_space(Filename) == 1)
	{
		std::cerr << "Error: A files is empty" << std::endl;
		return (1);
	}
    std::ifstream read(av[1]);
    if (read.fail())
    {
        std::cout << "Error: Opening file" << std::endl;
        return (1);
    }
    std::ofstream out((av[1] + std::string(".replace")).c_str());
    if (out.fail())
    {
        std::cout << "Error: creating file" << std::endl;
        return (1);
    }
    while (std::getline(read, buffer))
    {
        first_pos = 0;
        end_pos = 0;
        while ((end_pos = buffer.find(s1, first_pos)) != std::string::npos)
        {
            str.append(buffer, first_pos, end_pos - first_pos);
            str.append(s2);
            first_pos = end_pos + s1.size();
        }
        str.append(buffer, first_pos);
        str.append("\n");
    }
    out << str;
    read.close();
    out.close();
    return (0);
}    
