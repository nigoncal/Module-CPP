#ifndef ARRAY_H
# define ARRAY_H

template <typename T>
class Array 
{
	public: 
		Array() : _n(0), _array(NULL)
		{}

		Array(unsigned int n) : _n(n), _array(new T[n]())
		{}
		
		~Array()
		{
			if (NULL != this->_array)
				delete [] this->_array;
		}

		Array(Array const &cpy) : _n(0), _array(NULL) 
		{
			*this = cpy;
		}

		Array &operator=(Array const &cpy)
		{
			if (NULL != this->_array)
				delete [] this->_array;
			this->_array = new T[cpy.size()]();
			this->_n = cpy.size();

			for (unsigned int i = 0; i < this->_n; i++) {
				this->_array[i] = cpy._array[i];
			}
			return *this;
		}

		T& operator[](int index)
		{
			if (index < 0 || (unsigned int)index >= this->_n || !this->_array)
				throw std::exception();

			return this->_array[index];
		}

		unsigned int size() const
		{
			return this->_n;
		}

	private:
		unsigned int _n;
		T *_array;
};

#endif