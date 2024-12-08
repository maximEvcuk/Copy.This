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