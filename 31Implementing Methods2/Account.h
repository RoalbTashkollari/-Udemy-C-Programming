#pragma once
#include <string>
#include <sstream>
class Account {
private:
	std::string name;
	double balance;
public:

	void set_balance(double bal) { balance = bal; }
	double get_balance() { return balance; }

	// will be declared outside of the class
	void set_name(std::string);
	std::string get_name();

	bool deposit(double ammount);
	bool withdraw(double ammount);

	std::string to_string() { return name + " has " + std::to_string(get_balance()) + "$\n"; }
};