#include "array.h"
template <typename T>
T& array<T>::operator[](int n) {
	if (n >= 0 && n < _length) {
		return _arr[n];
	}
	return -1;
}
template<typename T>
bool array<T>::add(T value)
{
	T* temp = new T[_length + 1];
	if (temp == nullptr) {
		return false;
	}
	for (size_t i = 0; i < _length; i++)
	{
		temp[i] = _arr[i];
	}
	temp[_length] = value;
	delete[] _arr;
	_arr = temp;
	return true;
}

template<typename T>
size_t array<T>::length() const
{
	return _length;
}
