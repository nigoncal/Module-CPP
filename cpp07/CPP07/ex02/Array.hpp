#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "iostream"

template< typename T>
class Array
{
	public:
		Array<T>()
		{
			this->n = 0;
			this->_array = NULL;
		}
		Array<T>(unsigned int n): _n(n)
		{
			this->_array = new T[n];
		}
		Array<T>(Array const &copy)
		{
			this->_n = copy._n;
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i] = copy._array[i];
		}
		~Array<T>(void)
		{
			delete this->_array;
		}

		Array &operator=(Array const &rhs)
		{
			this->_n = rhs._n;
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i] = rhs._array[i];
			return(*this);
		}

		T	&operator[](unsigned int i)
		{
			if (i >= this->_n)
				throw Array<T>::OutOfRange();
			else
				return this->_array[i];
		}

		unsigned int	size(void) const
		{
			return this->_n;
		}

		class OutOfRange : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "Out of range";
			}
		};

	private:
		unsigned int _n;
		T *_array;
};

#endif