#include <iostream>
using namespace std;

void swapPointers(int*, int*);
int main()
{
	int scores[]{ 1,2,3 };
	cout << "Value of scores:  " << scores << endl;

	int* scores_ptr{ scores };
	cout << "Value of pointer: " << scores_ptr << endl;



	cout << "\nArray subscript notation ----------------------" << endl;
	cout << scores[0] << endl;
	cout << scores[1] << endl;
	cout << scores[2] << endl;


	cout << "\Pointer subscript notation ----------------------" << endl;
	cout << scores_ptr[0] << endl;
	cout << scores_ptr[1] << endl;
	cout << scores_ptr[2] << endl;



	cout << "\Pointer offset notation ----------------------" << endl;
	cout << *(scores_ptr) << endl;
	cout << *(scores_ptr + 1) << endl;
	cout << *(scores_ptr + 2) << endl;


	cout << "\Array offset notation ----------------------" << endl;
	cout << *(scores) << endl;
	cout << *(scores + 1) << endl;
	cout << *(scores + 2) << endl;
	cout << endl;




	
	int a = 5;
	int b = 10;

	cout << "Swap: " << a << ", " << b << endl;
	swapPointers(&a, &b);
	cout << "Swap: " << a << ", " << b << endl;




	int arr[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Size:" << size << endl;
	return 0;
}

void swapPointers(int* ptr1, int* ptr2) {
	//Solution 1
	int tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;

	//// Solution 2
	//*ptr1 = *ptr1 + *ptr2;
	//*ptr2 = *ptr1 - *ptr2;
	//*ptr1 = *ptr1 - *ptr2;
}
