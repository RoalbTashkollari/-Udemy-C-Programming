#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
private:
	// attributes
	string name{"Player"};
	int health{};
	int xp{};
public:
	//method
	void talk(string text) { cout << name << " says " << text << endl; };
	bool is_dead();
};

int main()
{
	// on stack
	Player frank;
	Player hero;
	frank.talk("hello there");
	Player* enemy{ nullptr };
	enemy = new Player ;
	delete enemy;
	return 0;
}