#include <iostream>
using namespace std;

void print(const int* const arr, size_t size); // pointer
int* apply_all(const int* const arr1, size_t size1, const int* const arr2, size_t size2); // reference
int main()
{
	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{ 1,2,3,4,5 };
	int array2[]{ 10,20,30 };

	cout << "Array 1:";
	print(array1, array1_size);

	cout << "Array 2:";
	print(array2, array2_size);

	int* result = apply_all(array1, array1_size, array2, array2_size);
	constexpr size_t result_size{ array1_size * array2_size };

	cout << "Result:";
	print(result, result_size);
	delete[] result;
	cout << endl;
	return 0;

}
// 1
void print(const int* const arr, size_t size) {
	cout << "[ ";
	for (size_t i{ 0 }; i < size; i++)
		// pointer subscript notation 
		cout << arr[i] << " "; // *(arr +i) alternative
	cout << "]" << endl;
}
// 2
int* apply_all(const int * const arr1, size_t size1, const int * const arr2, size_t size2) {
	int* ret{ nullptr };
	ret = new int[size1 * size2];
	int position{ 0 };
	// arr2
	for (size_t i{ 0 }; i < size2; i++) {
		//arr1
		//cout << arr2[i];
		for (size_t j{ 0 }; j < size1; j++) {
			ret[position] = arr2[i] * arr1[j]; 
			position++;
		}
	}
	return ret;
}