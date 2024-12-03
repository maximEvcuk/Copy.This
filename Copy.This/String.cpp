#include<iostream>
#include<cstring>

class String {
private:
	char* str;
	size_t size;

public:
	// ����������� �� ������������� 
	String() : size(80) {
	str = new char[size + 1];   
	str[0] = '\0'; //����������� ���������� �����
	}

	String(size_t length) : size(length) {
			str = new char[size + 1];
			str[0] = '\0'; //����������� ���������� �����
	}
	// ����������� ���������(����������� �����)
	String(const char* input) {
		size = strlen(input);
		str = new char[size + 1];
		strcpy(str, input);
	}
	//����������� ����
	String(const String& other) {
		size = other.size;
		str = new char[size + 1];
		strcpy(str, other.str);
	}
    
	//����� �������� ����� 
	void input() {
		std::cout << "Print String:" << std::endl;
		std::cin.getline(str, size + 1);

	}


	//����� ��������� ����� �� ����� 
	void output() const {
		std::cout << str << std::endl;
	}
	 
};

int main() {

	String defaultString;
	//�� ������������� (�����������)
	defaultString.input();
	defaultString.output();

	String customSizeString(50);// ������������ ������������ ��������� ������
	customSizeString.input();
	customSizeString.output();

	String initializedString("Hello World!!");

	initializedString.output();

	String copiedString = initializedString;
	copiedString.output();

	return 0;
}
