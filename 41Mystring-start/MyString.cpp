#include <iostream>
#include <cstring>
#include "MyString.h"
 
// No args constructor
MyString::MyString() : str{ nullptr } {
	str = new char[1];
	*str = '\0';
}

// Overloded constructor
MyString::MyString(const char* s) : str{ nullptr } {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[std::strlen(s) + 1];
		std::strcpy(str, s);
	}
}

// Copy constructor
MyString::MyString(const MyString& source)
	:str{ nullptr }
{
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}

// Copy assignment 

MyString& MyString::operator=(const MyString& rhs) {
	std::cout << "Copy assignment" << std::endl;

	if (this == &rhs)
		return *this;

	delete[] this->str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(str, rhs.str);

	return *this;
}

// Destructor
MyString::~MyString() {
	delete[] str;
}

// Display method
void MyString::display() const {
	std::cout << str << ":" << get_length() << std::endl;
}

int MyString::get_length() const {return std::strlen(str);}

const char* MyString::get_str() const { return str; }

