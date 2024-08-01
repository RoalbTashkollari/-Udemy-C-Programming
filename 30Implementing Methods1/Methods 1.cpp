#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

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

	std::string to_string() {return name + " has " + std::to_string(get_balance()) + "$\n";}
};

void Account::set_name(std::string n) {
	name = n;
}

std::string Account::get_name() {
	return name;
}

bool Account::deposit(double ammount) {
	if (ammount > 0) {
		balance += ammount;
		return true;
	}
	else
	{
		return false;
	}
}

bool Account::withdraw(double ammount) {
	if (balance - ammount >= 0)
	{
		balance -= ammount;
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	Account roalb_account;
	roalb_account.set_name("Roalb");
	roalb_account.set_balance(10000);

	if (roalb_account.deposit(-2))
		cout << "Deposit OK" << endl;
	else
		cout << "Deposit failed" << endl;

	if (roalb_account.withdraw(200))
		cout << "Withdraw OK" << endl;
	else
		cout << "Not suficient funds" << endl;

	cout << roalb_account.to_string() << endl;



}
