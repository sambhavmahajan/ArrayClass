#ifndef ARRAY_H
#define ARRAY_H
template<typename T>
class array {
private:
	T* _arr;
public:
	array(size_t length)
	{
		_arr = new T[size_t];
	}
};
#endif
