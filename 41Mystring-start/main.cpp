#include <iostream>
#include "MyString.h"

int main()
{
	MyString b{ "Hello" };		// overloded constructor
	MyString a;					// no args constructor
	b = a;						// copy
								// b.operator=(a)

	b = "This is a test";		// b.operator=("This is a test ")


	return 0;
}