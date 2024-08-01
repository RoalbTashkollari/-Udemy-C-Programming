#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	vector <int> vec = { 1,2,3,4,5,6,7,8,9 };
	for (unsigned i{ 0 }; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << " second verison ";
	for (auto temp : vec) {
		cout << temp << " ";
	}
	cout << endl << endl;

	// Range based for loop

	int scores[]{ 100,90,97 };

	for (int score : scores) {
		cout << score << endl;
	}
	cout << endl << endl << "=======================================" << endl;
	vector<double> temperatures{ 87.9,77.9,80.0,72.5 };
	double avarage_tmp{};
	double total{};
	for (auto temp : temperatures) {
		total += temp;
	}
	if (total != 0)
		avarage_tmp = total / temperatures.size();
	cout << fixed << setprecision(1);
	cout << "Avarage temp: " << avarage_tmp;

	cout << endl<< "=======================================" << endl;
	for (auto val : {1,2,3,4,5}){
		cout << val << endl;
	}

	cout << "=======================================" << endl;
	for (auto c : "This is a string") {
		cout << c;
	}

	cout << "=======================================" << endl;
}

