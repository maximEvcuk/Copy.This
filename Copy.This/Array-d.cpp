#include"Array.h"

Array::Array(size_t n) : size(n) {
    arr = new int[size]();
}

Array::Array(size_t n, bool random) : size(n) {
    arr = new int[size];
    if (random) {
        fillWithRandomValues();
    }
}

Array::Array(size_t n, int min, int max) : size(n) {
    arr = new int[size];
    for (size_t i = 0; i < size; ++i) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

Array::Array(const Array& other) : size(other.size) {
    arr = new int[size];
    for (size_t i = 0; i < size; ++i) {
        arr[i] = other.arr[i];
    }
}

Array::~Array() {
    delete[] arr;
}

void Array::display() const {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void Array::fillWithRandomValues() {
    for (size_t i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }
}

void Array::resize(size_t newSize) {
    int* newArr = new int[newSize];
    size_t copySize = (newSize < size) ? newSize : size;
    for (size_t i = 0; i < copySize; ++i) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    size = newSize;
}

void Array::sort() {
    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int Array::min() const {
    if (size == 0) {
        std::cout << "Array is empty" << std::endl;
        return 0;
    }

    int minValue = arr[0];
    for (size_t i = 0; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
    return minValue;
}

int Array::max() const {
    if (size == 0) {
        std::cout << "Array is empty" << std::endl;
        return 0;
    }

    int Array::max() const {
        if (size == 0) {
            std::cout << "Array is empty" << std::endl;
            return 0;
        }
        int maxValue = arr[0];
        for (size_t i = 0; i < size; ++i) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }
        return maxValue;
    }


    Ось код перевантаження операторів для класу Array без пояснень :

    ### Array.cpp

        // Оператор =
        Array& Array::operator=(const Array& other) {
        if (this != &other) {
            delete[] arr;
            size = other.size;
            arr = new int[size];
            for (size_t i = 0; i < size; ++i) {
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }

    // Бінарний оператор +
    Array Array::operator+(const Array& other) const {
        Array result(size + other.size);
        for (size_t i = 0; i < size; ++i) {
            result.arr[i] = arr[i];
        }
        for (size_t i = 0; i < other.size; ++i) {
            result.arr[size + i] = other.arr[i];
        }
        return result;
    }

    // Оператор +=
    Array& Array::operator+=(const Array& other) {
        size_t newSize = size + other.size;
        int* newArr = new int[newSize];
        for (size_t i = 0; i < size; ++i) {
            newArr[i] = arr[i];
        }
        for (size_t i = 0; i < other.size; ++i) {
            newArr[size + i] = other.arr[i];
        }
        delete[] arr;
        arr = newArr;
        size = newSize;
        return *this;
    }

    // Оператор []
    int& Array::operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return arr[index];
    }

    // Оператор <<
    std::ostream& operator<<(std::ostream& os, const Array& array) {
        for (size_t i = 0; i < array.size; ++i) {
            os << array.arr[i] << " ";
        }
        return os;
    }

    // Оператор ==
    bool Array::operator==(const Array& other) const {
        if (size != other.size) return false;
        for (size_t i = 0; i < size; ++i) {
            if (arr[i] != other.arr[i]) return false;
        }
        return true;
    }

    // Оператор !=
    bool Array::operator!=(const Array& other) const {
        return !(*this == other);
    }

    // Оператор >
    bool Array::operator>(const Array& other) const {
        return size > other.size;
    }

    // Оператор <
    bool Array::operator<(const Array& other) const {
        return size < other.size;
    }