#include "text.hpp"
#include <SFML/Graphics.hpp>

Text txt;

text::text(String titleName) {

	font.loadFromFile("font/Forum.ttf");

	txt.setFont(font);
	txt.setCharacterSize(20);

	//начальный цвет
	txt.setFillColor(Color(0, 0, 0));

	txt.setString(titleName);

	title = titleName;

}

//текст будет следить за спрайтом
void text::followSprite(Sprite& s, float x, float y)
{	
	txt.setPosition(s.getPosition().x + x, s.getPosition().y + y);
}

//дать число тексту
void text::getNumber(float n)
{
	ostringstream chislo;

	chislo << n;

	txt.setString(title + chislo.str());
}


//ф-я для текста
void text::setString(string name) {

	txt.setString(name);

}

 void text::setPosition(float x, float y) {

	txt.setPosition(x, y);

}

void text::setFillTextColor(float R, float G1, float B) {

	txt.setFillColor(Color(R, G1, B));

}

//поменять размер шрифта
void text::setCharacterSize(float a) {

	txt.setCharacterSize(a);

}

//нарисовать в окне
void text::draw(RenderWindow& window) {

	window.draw(txt);

};


