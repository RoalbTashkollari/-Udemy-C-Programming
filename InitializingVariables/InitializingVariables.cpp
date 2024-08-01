#include <iostream>
using namespace std;
int main(int arc, char* argc[])
{

	int room_width{ 0 }, room_length{ 0 };

	cout << "Enter the width of the room:";
	cin >> room_width;

	cout << "Enter the length of the room:";
	cin >> room_length;


	cout << "The room area is:" << room_width * room_length << " square meters" << endl;
	return 0;
}
