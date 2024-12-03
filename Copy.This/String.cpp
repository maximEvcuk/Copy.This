#include<iostream>
#include<cstring>

class String {
private:
	char* str;
	size_t size;

public:
	// Конструктор за замовчуванням 
	String() : size(80) {
	str = new char[size + 1];   
	str[0] = '\0'; //ініціалізація порожнбого рядку
	}

	String(size_t length) : size(length) {
			str = new char[size + 1];
			str[0] = '\0'; //ініціалізація порожнбого рядку
	}
	// конструктор виконання(ініціалізація рядку)
	String(const char* input) {
		size = strlen(input);
		str = new char[size + 1];
		strcpy(str, input);
	}
	//Конструктор копій
	String(const String& other) {
		size = other.size;
		str = new char[size + 1];
		strcpy(str, other.str);
	}
    
	//Метод введення рядка 
	void input() {
		std::cout << "Print String:" << std::endl;
		std::cin.getline(str, size + 1);

	}


	//Метод виведення рядка на екран 
	void output() const {
		std::cout << str << std::endl;
	}
	 
};

int main() {

	String defaultString;
	//За замовчуванням (автоматично)
	defaultString.input();
	defaultString.output();

	String customSizeString(50);// використання конструктора довільного розміру
	customSizeString.input();
	customSizeString.output();

	String initializedString("Hello World!!");

	initializedString.output();

	String copiedString = initializedString;
	copiedString.output();

	return 0;
}
