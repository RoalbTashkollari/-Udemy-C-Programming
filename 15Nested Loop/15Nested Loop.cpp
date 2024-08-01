#include <iostream>
#include <vector>
using namespace std;

void NestedLoops() {
	int size{ 0 };
	cout << "How many data items do you have?";
	cin >> size;
	vector <int> items_collection{};
	for (int i{ 1 }; i <= size; i++) {
		int items{ 0 };
		cout << "Enter data item " << i << ":";
		cin >> items;
		items_collection.push_back(items);
	}
	cout << "Displaying Histogram:" << endl;
	for (auto values : items_collection) {
		for (int value{ 1 }; value <= values; value++) {
			if (value % 5 == 0)
				cout << "*";
			else
				cout << "-";
		}

		cout << endl;
	}
}

void Challenge() {
	vector <int> numbers{};
	char choise{};

	int num{ 0 };
	double mean{};
	int min{ INT_MAX };
	int max{ INT_MIN };

	do {

		cout << "P - Print numbers" << endl;
		cout << "A - Add number" << endl;
		cout << "M - Display mean of numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit" << endl;
		cin >> choise;

		switch (choise) {
		case 'P':
		case 'p':

			if (numbers.size() == 0)
				cout << "[] There are no numbers" << endl;
			else {
				cout << "[ ";
				for (auto el : numbers)
					cout << el << " ";
				cout << "]" << endl;
			}

			break;

		case 'A':
		case 'a':
			cout << "Enter a number to add to the collection:";
			cin >> num;
			numbers.push_back(num);
			cout << num << " added" << endl;
			break;

		case'M':
		case'm':
			if (numbers.size() > 0) {
				for (auto el : numbers)
					mean += el;
				cout << "Mean : " << static_cast<double> (mean) / numbers.size() << endl;;
			}
			else {
				cout << "No data to calculate the mean";
			}

			break;

		case'S':
		case's':

			for (auto el : numbers)
				if (el < min)
					min = el;
			cout << "The minimum of the numbers is:" << min << endl;
			break;

		case'L':
		case'l':

			for (auto el : numbers)
				if (el > max)
					max = el;
			cout << "The maximum of the numbers is:" << max << endl;
			break;

		case'Q':
		case'q':
			cout << "Good bye!" << endl;
			break;
		default:
			cout << "Invalid input, please choose the correct values!" << endl;
			break;

		}

		cout << endl;
	} while (choise != 'q' && choise != 'Q');


}

int main()
{
	//NestedLoops();
	Challenge();

}