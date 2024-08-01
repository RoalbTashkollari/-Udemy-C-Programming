#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int&);
void pass_by_ref2(string&);
void pass_by_ref3(vector<string>&);
void print_vector(const vector<string>&);

void pass_by_ref1(int& num) {
	num = 1000;
}

void pass_by_ref2(string& s) {
	s = "Changed";
}

void pass_by_ref3(vector<string>& v) {
	v.clear();
}

void print_vector(const vector<string>& v) {
	for (auto s : v) {
		cout << s << " ";
	} cout << endl;
}
int main()
{
	int num1{ 10 };
	int num2{ 20 };

	cout << num1<<endl;
	pass_by_ref1(num1);
	cout << num1 << endl;

	string name{ "Roalb" };
	cout << name << endl;
	pass_by_ref2(name);
	cout << name << endl;

	vector<string> vec{"Test","Test"};
	print_vector(vec);
	pass_by_ref3(vec);
	print_vector(vec);
}