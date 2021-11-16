#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template< typename Tadd, typename Tlenght, typename TFunction>
void iter(Tadd *tab, Tlenght lenght, TFunction *fct)
{
	for (int i = 0; i < lenght; i++)
	{
		(*fct)(tab[i]);
	}
}

template< typename Tadd, typename Tlenght>
void iter(Tadd const *tab, Tlenght lenght, void (*fct)(Tadd const &tab))
{
	for (int i = 0; i < lenght; i++)
	{
		(*fct)(tab[i]);
	}
}
#endif