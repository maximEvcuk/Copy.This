#pragma once

#ifdef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <cstdlib>

class Array {
private:
    int* arr;
    size_t size;

public:
    Array(size_t n);
    Array(size_t n, bool random);
    Array(size_t n, int min, int nax);
    Array(const Array& other);
    ~Array();

    void display() const;
    void fillWithRandomValues();
    void resize(size_t newSize);
    void sort();
    int min() const;
    int max() const;

};


#endif // ARRAY_H

