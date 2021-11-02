/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:34:42 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:34:43 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &cpy);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const &cpy);

		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &type);

	private:
		AMateria *_mat[4];
};

#endif