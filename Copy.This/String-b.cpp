#include "String.h"
#include<cstring>
#include<iostream>

// ����������� �� �������������
String::String() : size(80) {
    str = new char[size + 1];
    str[0] = '\0'; // ����������� ���������� �����
}

// ����������� � ���������� �������
String::String(size_t length) : size(length) {
    str = new char[size + 1];
    str[0] = '\0'; // ����������� ���������� �����
}

// ����������� ����������� �����
String::String(const char* input) {
    size = strlen(input);
    str = new char[size + 1];
    strcpy(str, input);
}

// ����������� ����
String::String(const String& other) {
    size = other.size;
    str = new char[size + 1];
    strcpy(str, other.str);
}

// ����� �������� �����
void String::input() {
    std::cout << "Print String:" << std::endl;
    std::cin.getline(str, size + 1);
}

// ����� ��������� ����� �� �����
void String::output() const {
    std::cout << str << std::endl;
}

// ����������
String::~String() {
    delete[] str;
}