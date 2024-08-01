#include <iostream>
#include <string>   
using namespace std;
int main()
{
	string s0; // Empty
	string s1{ "Apple" };
	string s2{ "Banana" };
	string s3{ "Kiwi" };
	string s4{ "apple" };
	string s5{ s1 };
	string s6{ s1, 0,3 };
	string s7{ 10,'X' };


	// Initialization
	cout << "\n[Initialization]" << "\n-----------------------" << endl;
	cout << "s1 is initialized to :" << s1 << endl;
	cout << "s2 is initialized to :" << s2 << endl;
	cout << "s3 is initialized to :" << s3 << endl;
	cout << "s4 is initialized to :" << s4 << endl;
	cout << "s5 is initialized to :" << s5 << endl;
	cout << "s6 is initialized to :" << s6 << endl;
	cout << "s7 is initialized to :" << s7 << endl;

	// Comparison
	cout << "\n[Comparison]" << "\n-----------------------" << endl;
	cout << s1 << "==" << s5 << ":" << (s1 == s5) << endl;
	cout << s1 << "==" << s2 << ":" << (s1 == s2) << endl;
	cout << s1 << "!=" << s2 << ":" << (s1 != s2) << endl;
	cout << s1 << "<" << s2 << ":" << (s1 < s2) << endl;
	cout << s2 << ">" << s1 << ":" << (s2 > s1) << endl;
	cout << s4 << "<" << s5 << ":" << (s4 < s5) << endl;
	cout << s1 << "==" << "Apple" << ":" << (s1 == "Apple") << endl;

	// Assignment 
	cout << "\n[Assignment]" << "\n-----------------------" << endl;
	s1 = "Watermelon";
	cout << "s1 is now: " << s1 << endl;
	s2 = s1;
	cout << "s2 is now: " << s1 << endl;
	s3 = "Frank";
	cout << "s3 is now: " << s3 << endl;
	s3[0] = 'C';
	cout << "s3 change first letter to C: " << s3 << endl;
	s3.at(0) = 'P';
	cout << "s3 change first letter to P: " << s3 << endl;

	// Concatenation
	cout << "\n[Concatenation]" << "\n-----------------------" << endl;
	s3 = "Watermelon";
	s3 = s5 + " and " + s2 + " juice.";
	cout << s3 << endl;

	//s3 = "nice" + " cold" + s5 + "juice"; // Compiler error we have to use strcat()


	// for loop
	cout << "\n[for loop]" << "\n-----------------------" << endl;
	s1 = "Apple";
	for (size_t i{ 0 }; i < s1.length(); i++)
		cout << s1.at(i); // or s1[i]	s1.at() does bound cheking
	cout << endl;

	// Substring
	cout << "\n[Substring]" << "\n-----------------------" << endl;
	s1 = "This is a test";
	cout << s1.substr(0, 4) << endl;
	cout << s1.substr(5, 2) << endl;
	cout << s1.substr(10, 4) << endl;

	// Erase
	cout << "\n[Erase]" << "\n-----------------------" << endl;
	s1 = "This is a test";
	s1.erase(0, 5);
	cout << "s1 is now: " << s1 << endl;

	// getline
	cout << "\n[getline]" << "\n-----------------------" << endl;
	string full_name{};
	cout << "Enter your full name: ";
	getline(cin, full_name);
	cout << "Your full name is: " << full_name << endl;

	// Find 
	s1 = "The secret word";
	cout << "\n[Find]" << s1 << "\n-----------------------" << endl;
	string word{};
	cout << "Enter a workd to find: ";
	cin >> word;

	size_t positon = s1.find(word);

	if (positon != string::npos)
		cout << "Found " << word << " at positon: " << positon<<endl;
	else
		cout << "Sory, " << word << " not found." << endl;

	 

}