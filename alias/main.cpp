#include "Start.hpp"
using namespace std;
using namespace sf;

int main()
{
	// создание окна #1 (главное меню)
	RenderWindow window(sf::VideoMode(1440, 900), "Alias");

	Start(window);

	return 0;
}

