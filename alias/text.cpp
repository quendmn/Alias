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


// изменить строку (текст)
void text::setString(string name) {

	txt.setString(name);

}
// изменить положение текста
 void text::setPosition(float x, float y) {

	txt.setPosition(x, y);

}
 // изменить цвет текста
void text::setFillTextColor(float R, float G1, float B) {

	txt.setFillColor(Color(R, G1, B));

}

// изменить размер шрифта
void text::setCharacterSize(float a) {

	txt.setCharacterSize(a);

}

// отобразить в окне
void text::draw(RenderWindow& window) {

	window.draw(txt);

};


