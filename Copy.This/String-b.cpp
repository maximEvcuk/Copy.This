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

// Оператор =
String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] str;
        size = other.size;
        str = new char[size + 1];
        strcpy(str, other.str);
    }
    return *this;
}

// Бінарний оператор +
String String::operator+(const String& other) const {
    String result(size + other.size);
    strcpy(result.str, str);
    strcat(result.str, other.str);
    return result;
}

// Оператор +=
String& String::operator+=(const String& other) {
    size_t newSize = size + other.size;
    char* newStr = new char[newSize + 1];
    strcpy(newStr, str);
    strcat(newStr, other.str);
    delete[] str;
    str = newStr;
    size = newSize;
    return *this;
}

// Оператор []
char& String::operator[](size_t index) {
    return str[index];
}

// Оператор <<
std::ostream& operator<<(std::ostream& os, const String& str) {
    os << str.str;
    return os;
}

// Оператор ==
bool String::operator==(const String& other) const {
    return strcmp(str, other.str) == 0;
}

// Оператор !=
bool String::operator!=(const String& other) const {
    return !(*this == other);
}

// Оператор >
bool String::operator>(const String& other) const {
    return size > other.size;
}

// Оператор <
bool String::operator<(const String& other) const {
    return size < other.size;
}‍