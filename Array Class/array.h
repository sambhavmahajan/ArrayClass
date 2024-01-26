#ifndef ARRAY_H
#define ARRAY_H
template<typename T = int>
class array {
private:
	T* _arr;
	size_t _length;
public:
	inline array(size_t length) : _length(length)
	{
		_arr = new T[size_t];
	}
	~array() {
		delete[] _arr;
	}
	T& operator[](int);
	bool add(T value);

	size_t length() const;
};
#endif
