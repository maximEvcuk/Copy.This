#pragma once

#ifdef STRING_H
#define STRING_H

#include <iostream>
#include <cstring>

class String {
private:
    char* str;
    size_t size;

public:
    // Конструктор за замовчуванням
    String();
    String(size_t length);
    // Конструктор ініціалізації рядку
    String(const char* input);
    // Конструктор копій
    String(const String& other);

    // Метод введення рядка
    void input();
    // Метод виведення рядка на екран
    void output() const;

    // Деструктор
    ~String();
};




#endif // STRING_H
