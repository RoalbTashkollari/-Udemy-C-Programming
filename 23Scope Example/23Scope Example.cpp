#include <iostream>
using namespace std;

int num{ 300 };

void static_local_example() {
	static int num{ 1000 };
	cout << "\nLocal static num is: " << num << " in static_local_example - start " << endl;
	num += 1000;
	cout << "Local static num is: " << num << " in static_local_example - end " << endl;
}

void global_examlpe(){
	cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
	num *= 2;
	cout << "Global num is: " << num << " in global_example - end" << endl;
}

void local_exanple(int x){
	int num{ 1000 };
	cout << "\nLocal num is: " << num << " in the local example - start " << endl;
	num = x;
	cout << "Local num is: " << num << " in the local example - end " << endl;

}

int main()
{
	int num{ 100 };
	int num1{ 500 };
	cout << "Local num is: " << num << " in main " << endl;

	{
		int num{ 200 };
		cout << "Local num is: " << num << " in inner block main." << endl;
		cout << "Inner block in main can see out - num1: " << num1 << endl;
	}

	cout << "Local num is: " << num << " in main" << endl;

	local_exanple(10);
	local_exanple(20);

	global_examlpe();
	global_examlpe();

	static_local_example();
	static_local_example();
}
