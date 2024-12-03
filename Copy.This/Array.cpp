#include<iostream>
#include<cstdlib>

class Array {
private:
	int* arr;
	size_t size;

public:
	Array(size_t n) : size(n) {
		arr = new int[size]();
	}

	Array(size_t n, bool random) : size(n) {
		arr = new int[size];
		if (random) {
			fillWithRandomValues();
		}
	}

	Array(size_t n, int min, int max) : size(n) {
		arr = new int[size];
		for (size_t i = 0; i < size; ++i)
		{
			arr[i] = min + rand() % (max - min + 1);
		}
	}

	Array(const Array& other) : size(other.size) {
		arr = new int[size];
		for (size_t i = 0; i < size; ++i)
		{
			arr[i] = other.arr[i];
		}
	}

	~Array() {
		delete[] arr;
	}

	void display() const {
		for (size_t i = 0; i < size; ++i)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}

	
};

int main() {
	srand(static_cast <unsigned int>(time(NULL)));
	return 0;
}