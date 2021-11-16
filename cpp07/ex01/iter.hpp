#ifndef ITER_H
# define ITER_H

template <typename T>
void	iter (T *array, unsigned int size, void (*f)(T &elem))
{
	for (unsigned int i = 0; i < size; i++) {
		f(array[i]);
	}
}

#endif