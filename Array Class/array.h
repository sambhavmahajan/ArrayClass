#ifndef ARRAY_H
#define ARRAY_H
template<typename T>
class array {
private:
	T* _arr;
	size_t _length;
public:
	inline array(size_t length) : _length(length)
	{
		_arr = new T[size_t];
	}
};
#endif
