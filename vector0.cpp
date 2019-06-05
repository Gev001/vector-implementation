#include"vector0.h"
template<class T>
vector<T>::vector()
{
	
	m_size = 0;
	m_cap = 100;
	m_arr = new T[m_cap];
	std::cout << "defoult ctor: \n";
}

template<class T>
vector<T>::vector(vector<T>& other)
{
	m_size = other.m_size;
	m_cap = other.m_cap;
	m_arr = new T[m_cap];
	for (int i = 0; i < m_size; ++i)
	{
		m_arr[i] = other.m_arr[i];
	}
	std::cout << "copy ctor: \n \n";
}

template<class T>
vector<T>::vector(vector<T>&& other)
{

	m_size = other.m_size;
	m_cap = other.m_cap;
	m_arr = other.m_arr;
	other.m_arr = nullptr;
	std::cout << "copy ctor: \n \n";
}

template<class T>
vector<T>& vector<T>::operator=(vector<T>& other)
{
	if (this == &other) { throw std::exception("same adress\n\n"); }
	else
	{

		m_size = other.m_size;
		m_cap = other.m_cap;
		m_arr = new T[m_cap];
		for (int i = 0; i < m_size; ++i)
		{
			m_arr[i] = other.m_arr[i];
		}
		std::cout << "assigment: \n \n";
		return *this;
	}
}

template<class T>
vector<T>& vector<T>::operator=(vector<T>&& other)
{

if (this == &other) { throw std::exception(" same adress\n\n"); }
else 
    {
        m_size = other.m_size;
        m_cap = other.m_cap;
        m_arr = other.m_arr;
        std::cout << "move assigment: \n \n";
		}
}

template<class T>
const unsigned vector<T>::size() const
{
		return m_size;
}

template<class T>
const unsigned vector<T>::capasity() const
{
	return m_cap;
}

template<class T>
const bool vector<T>::empty()
{
	return m_size==0;
}


template<class T>
void vector<T>::push_back(const T value)
{
	if (m_size< m_cap) { m_arr[m_size++] = value; }
	else
	{
		m_cap *= 2;
		T*current = new T[m_cap];
		for (unsigned i = 0; i < m_size; ++i)
		{
			current[i] = m_arr[i];
		}
		delete[] m_arr;
		m_arr = current;
		m_arr[m_size++] = value;
	}
	
}

template<class T>
void vector<T>::pop_back()
{
	if (m_size == 0) { throw std::exception("overflow \n \n"); }
	else
	{
	--m_size;
	}
}

template<class T>
void vector<T>::push_front(const T val)
{
	int n = m_size;
	if (m_size < m_cap)
	{
		while (n > 0)
		{
			m_arr[n] = m_arr[n - 1];
		
		}
		m_arr[n] = val;
		

	}
	else
	{
		m_cap *= 2;
		T*crr = new T[m_cap];
		for (unsigned i = 0; i <size(); ++i)
		{
			crr[i] = m_arr[i];
		}
		while (n > 0)
		{
			m_arr[n] = m_arr[n - 1];
			
		}
		m_arr[n] = val;
	}
	++m_size;
}

template<class T>
void vector<T>::pop_front()
{
	for (int i = 0; i < m_size; ++i)
	{
		m_arr[i] = m_arr[i + 1];
	}
	--m_size;
}


template<class T>
void vector<T>::print1()
{
	for (unsigned i= 0; i < size(); ++i)
	{
		std::cout << m_arr[i] << " ";
	}

}

/*template<class T>
void vector<T>::insert(int index, const T value)
{
	int n = m_size;
	if (m_size < m_cap)
	{
		while (n >index)
		{                                 //sxal ban ka?
			m_arr[n] = m_arr[n-1];
	    }
		m_arr[n] = value;
		++m_size;
	}
	else
	{
		m_cap *= 2;
		T*crr = new T[m_cap];
		for (unsigned i = 0; i < m_size; ++i)
		{
			crr[i] = m_arr[i];
		}
		delete[] m_arr;
		m_arr = crr;
		while (n > index)
		{
			m_arr[n] = m_arr[n-1];	
		}
		m_arr[n] = value;

		++m_size;
	}
}

template<class T>
void vector<T>::erase(int index)
{
	int n = m_size;
	for (unsigned i = 0; i < index; ++i) {} //erase ?
}

*/
template<class T>
void vector<T>::reverse()
{
	int k = size() - 1;
	for (int i = 0; i < m_size / 2; ++i)
	{
		std::swap(m_arr[i], m_arr[k]);
		--k;
	}
}





