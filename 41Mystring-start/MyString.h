#pragma once
class MyString
{
private:
	char* str;
public:
	MyString();
	MyString(const char* s);
	MyString(const MyString & s);
	~MyString();

	MyString& operator=(const MyString &rhs); // Copy assignment

	void display() const;
	int get_length() const;
	const char* get_str() const;
};

