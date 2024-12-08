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
    // ����������� �� �������������
    String();
    String(size_t length);
    // ����������� ����������� �����
    String(const char* input);
    // ����������� ����
    String(const String& other);

    // ����� �������� �����
    void input();
    // ����� ��������� ����� �� �����
    void output() const;

    // ����������
    ~String();
};




#endif // STRING_H
