#include <iostream>

class Player {
private:
	std::string name{ "undefined" };
	int health;
	int xp;
public:
	void set_name(std::string name_val) {
		name = name_val;
	}

	Player() {
		std::cout << "No args constructor called" << std::endl;
	}
	Player(std::string n) {
		name = n;
		std::cout << "String arg constructor called " << std::endl;
	}

	Player(std::string n, int health, int xp) {
		name = n;
		std::cout << "Full args constructor called " << std::endl;
	}

	~Player() {
		std::cout << "Destuctor called for " << name << std::endl;
	}
};

int main()
{
	{	// Destructor will be called before p2, it gets out of scope
		Player p1{  };
	}
	Player p2{ "Roalb1" };
	Player p3{ "Roalb2", 100,0 };

	Player* ptrPlayer = new Player("Roalb3");
	delete ptrPlayer;

}