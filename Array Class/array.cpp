#include "array.h"
template <typename T>
T& array<T>::operator[](int n) {
	if (n >= 0 && n < _length) {
		return _arr[n];
	}
	return -1;
}