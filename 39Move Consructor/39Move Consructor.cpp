#include <iostream>
#include <vector>
using namespace std;

class Move {
private:
	int* data;
public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }

	//Constructor
	Move(int d);
	//Copy Constructor
	Move(const Move& source);
	// Move conscructor
	Move(Move&& source) noexcept;
	//Destructor
	~Move();
};
// Constructor
Move::Move(int d) {
	data = new int;
	*data = d;
	cout << "Constructor for: " << d << endl;
}
// Copy constructor
Move::Move(const Move& source)
	: Move(*source.data)
{
	cout << "Copy constructor - deep copy for " << *data << endl;
}

// Move constructor
Move::Move(Move&& source) noexcept
	:data{source.data}
{	
	source.data = nullptr;
	cout << "Move constructor - moving resource: " << *data << endl;
}

// Destructor
Move::~Move() {
	if (data != nullptr)
		cout << "Destructor for data " << *data << endl;
	else
		cout << "Destructor freeing data for nullptr"<< endl;

	delete data;
}


void display_shallow(Move s) { cout << s.get_data_value() << endl; }

int main()
{
	vector<Move> vec;
	// 1. create a Move obj, 2. call copy consctructor to create a copy of obj and pass it to the vector, 3. call again the const to create the copy, 4. delete the tmp obj by calling destructor
	vec.push_back(Move{ 10 });

	vec.push_back(Move{ 20 });
	vec.push_back(Move{ 30 });
	vec.push_back(Move{ 40 });
	vec.push_back(Move{ 50 });
	vec.push_back(Move{ 60 });
	vec.push_back(Move{ 70 });
	vec.push_back(Move{ 80 });


	return 0;
}