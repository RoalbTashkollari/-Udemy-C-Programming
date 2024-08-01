#include <iostream>
using namespace std;

class Player {
private:
	std::string name;
	int health;
	int xp;

public:
	Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
	void print() {
		cout << name << " health: " << health << " xp: " << xp << endl;
	}
};


Player::Player(std::string name_val, int health_val, int xp_val) : name{ name_val }, health{ health_val }, xp{ xp_val } {
	cout << "Three-args constructor" << endl;
}

int main()
{
	Player empty;
	Player Roalb{ "Roalb" };
	Player hero{ "hero", 100 };
	Player enemy{ "Villian", 100, 55 };

	empty.print();
	Roalb.print();
	hero.print();
	enemy.print();

	return 0;
}