#include <iostream>
#include "Account.h"

int main()
{
	Account roalb_account;
	roalb_account.set_name("Roalb");
	roalb_account.set_balance(10000);
	double deposit = 200;
	double withdraw = 5000;
	if (roalb_account.deposit(deposit))
		std::cout << "Deposit OK" << std::endl;
	else
		std::cout << "Deposit failed" << std::endl;

	if (roalb_account.withdraw(withdraw))
		std::cout << "Withdraw OK" << std::endl;
	else
		std::cout << "Not suficient funds" << std::endl;

	std::cout << roalb_account.to_string() << std::endl;
}