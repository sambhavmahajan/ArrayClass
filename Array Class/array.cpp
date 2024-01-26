#include "array.h"
template <typename T>
T& array<T>::operator[](int n) {
	if (n >= 0 && n < _length) {
		return _arr[n];
	}
	throw std::out_of_range("Index out of bounds");
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
	_length++;
	return true;
}

template<typename T>
bool array<T>::removeAt(int n)
{
	T* temp = new T[_length - 1];
	if (temp == nullptr) {
		return false;
	}
	bool t = false;
	for (size_t i = 0; i < _length; i++)
	{
		if (i == n) {
			break;
			t = true;
		}
		temp[i - t] = _arr[i];
	}
	delete[] _arr;
	_arr = temp;
	_length--;
	return true;
}

template<typename T>
size_t array<T>::length() const
{
	return _length;
}
