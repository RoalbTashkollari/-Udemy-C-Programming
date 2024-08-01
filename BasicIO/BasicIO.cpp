#include <iostream>



int main()
{
	std::cout << "Hello World!\n";

	int num1, num2;
	double num3;

	//std::cout << "Enter the first integer:" << std::endl;
	//std::cin >> num1;
	//std::cout << "Enter the second integer:" << std::endl;
	//std::cin >> num2;

	//std::cout << "You entered: num1:" << num1 << ", num2:" << num2 << std::endl;
	/*******************************************************************************/
	//std::cout << "Enter two integers seperated by space x y:" << std::endl;
	//std::cin >> num1 >> num2;
	//std::cout << "You entered number " << num1 << " and number " << num2;
	/*******************************************************************************/
	//std::cout << "Enter a double:" << std::endl;
	//std::cin >> num3;
	//std::cout << "You entered: " << num3 << std::endl;
	/*******************************************************************************/
	std::cout << "Enter an integer:" << std::endl;
	std::cin >> num1;

	std::cout << "Enter a double:" << std::endl;
	std::cin >> num3;

	std::cout << "The integer is: " << num1 << std::endl;
	std::cout << "And the double: " << num3 << std::endl;

}
