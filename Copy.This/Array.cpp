//#include<iostream>
//#include<cstdlib>
//
//class Array {
//private:
//	int* arr;
//	size_t size;
//
//public:
//	Array(size_t n) : size(n) {
//		arr = new int[size]();
//	}
//
//	Array(size_t n, bool random) : size(n) {
//		arr = new int[size];
//		if (random) {
//			fillWithRandomValues();
//		}
//	}
//
//	Array(size_t n, int min, int max) : size(n) {
//		arr = new int[size];
//		for (size_t i = 0; i < size; ++i)
//		{
//			arr[i] = min + rand() % (max - min + 1);
//		}
//	}
//
//	Array(const Array& other) : size(other.size) {
//		arr = new int[size];
//		for (size_t i = 0; i < size; ++i)
//		{
//			arr[i] = other.arr[i];
//		}
//	}
//
//	~Array() {
//		delete[] arr;
//	}
//
//	void display() const {
//		for (size_t i = 0; i < size; ++i)
//		{
//			std::cout << arr[i] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	void fillWithRandomValues() {
//		for (size_t i = 0; i < size; ++i)
//		{
//			arr[i] = rand() % 100; 
//		}
//	}
//	void resize(size_t newSize) {
//		int* newArr = new int[newSize];
//		size_t copySize = (newSize < size) ? newSize : size;
//		for (size_t i = 0; i < copySize; ++i)
//		{
//			newArr[i] = arr[i];
//		}
//		delete[] arr;
//		arr - newArr;
//		size = newSize;
//	}
//
//	void sort() {
//		for (size_t i = 0; i < size - 1; ++i)
//		{
//			for (size_t j = 0; j < size - i - 1; ++j)
//			{
//				if (arr[j] > arr[j +1])
//				{
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//
//		}
//	}
//
//	int min() const {
//		if (size == 0) throw std::runtime_error("Array is empty");
//		int minValue = arr[0];
//		for (size_t i = 0; i < size; ++i){
//			if (arr[i] < minValue)
//			{
//				minValue = arr[i];
//			}
//		}
//		
//
//		return minValue;
//	}
//	
//	int max() const {
//		if (size == 0) throw std::runtime_error("Array is empty");
//		int maxValue = arr[0];
//		for (size_t i = 0; i < size; ++i) {
//			if (arr[i] > maxValue)
//			{
//				maxValue = arr[i];
//			}
//		}
//
//
//		return maxValue;
//	}
//};
//
//int main() {
//	srand(static_cast <unsigned int>(time(NULL)));
//	
//	Array emptyArray(5);
//	emptyArray.display();
//
//	Array randomArray(10, true);
//	randomArray.display();
//
//	Array rangeArray(10, 1, 100);
//	rangeArray.display();
//
//	std::cout << "Min:" << rangeArray.min() << std::endl;
//	std::cout << "Max:" << rangeArray.max() << std::endl;
//
//	rangeArray.sort();
//	std::cout << "Sorteed array";
//	rangeArray.display();
//
//	rangeArray.resize(5);
//	std::cout << "Resized array";
//	rangeArray.display();
//
//
//	return 0;
//}