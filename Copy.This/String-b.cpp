#include "String.h"
#include<cstring>
#include<iostream>

// Конструктор за замовчуванням
String::String() : size(80) {
    str = new char[size + 1];
    str[0] = '\0'; // ініціалізація порожнього рядку
}

// Конструктор з параметром довжини
String::String(size_t length) : size(length) {
    str = new char[size + 1];
    str[0] = '\0'; // ініціалізація порожнього рядку
}

// Конструктор ініціалізації рядку
String::String(const char* input) {
    size = strlen(input);
    str = new char[size + 1];
    strcpy(str, input);
}

// Конструктор копій
String::String(const String& other) {
    size = other.size;
    str = new char[size + 1];
    strcpy(str, other.str);
}

// Метод введення рядка
void String::input() {
    std::cout << "Print String:" << std::endl;
    std::cin.getline(str, size + 1);
}

// Метод виведення рядка на екран
void String::output() const {
    std::cout << str << std::endl;
}

// Деструктор
String::~String() {
    delete[] str;
}