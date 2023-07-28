#include "Text.hpp"
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
Text txt;

text(String shribeName) {

	font.loadFromFile("font/Forum.ttf");

	txt.setFont(font);
	txt.setCharacterSize(20);

	//начальный цвет
	txt.setFillColor(Color(0, 0, 0));

	txt.setString(shribeName);

	shribe = shribeName;

}

//текст будет следить за спрайтом
virtual void sleditForSprite(Sprite& s, float x, float y) {

	txt.setPosition(s.getPosition().x + x, s.getPosition().y + y);

}

//дать число тексту
void getChislo(float n) {

	ostringstream chislo;

	chislo << n;

	txt.setString(shribe + chislo.str());

}

//ф-я для текста
void setString(string name) {

	txt.setString(name);

}

virtual void setPosition(float x, float y) {

	txt.setPosition(x, y);

}

void setFillTextColor(float R, float G1, float B) {

	txt.setFillColor(Color(R, G1, B));

}

//поменять размер шрифта
void setCharacterSize(float a) {

	txt.setCharacterSize(a);

}

//нарисовать в окне
virtual void draw(RenderWindow& window) {

	window.draw(txt);

};