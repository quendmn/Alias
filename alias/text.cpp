#include "text.hpp"
#include <SFML/Graphics.hpp>

Text txt;

text::text(String titleName) {

	font.loadFromFile("font/Forum.ttf");

	txt.setFont(font);
	txt.setCharacterSize(20);

	//��������� ����
	txt.setFillColor(Color(0, 0, 0));

	txt.setString(titleName);

	title = titleName;

}


// �������� ������ (�����)
void text::setString(string name) {

	txt.setString(name);

}
// �������� ��������� ������
 void text::setPosition(float x, float y) {

	txt.setPosition(x, y);

}
 // �������� ���� ������
void text::setFillTextColor(float R, float G1, float B) {

	txt.setFillColor(Color(R, G1, B));

}

// �������� ������ ������
void text::setCharacterSize(float a) {

	txt.setCharacterSize(a);

}

// ���������� � ����
void text::draw(RenderWindow& window) {

	window.draw(txt);

};


