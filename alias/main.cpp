#include "Start.hpp"
#include "InputWordsAndClues.hpp"
using namespace std;
using namespace sf;

int main()
{
	// создание окна #1 (главное меню)
	RenderWindow window(sf::VideoMode(1440, 900), "Alias");
	std::vector<string> Words;
	int size = 20;
	int* arr = new int[size];
	InputWordsAndClues_1000(Words);
	Random_generate(arr, size);

	Start(window, Words, arr);

	delete[] arr;
	return 0;
}

