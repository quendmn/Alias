#include "Button.hpp"
#include <SFML/Graphics.hpp>

RectangleShape button;

// ���������� � ����
void Button::draw(RenderWindow& window) {
	txt.setPosition(button.getPosition());


	window.draw(button);
	window.draw(txt);
}

// �������� �� �������
bool Button::pressed(Event& event, Vector2f  pos) {
	if (button.getGlobalBounds().contains(pos.x, pos.y) && event.type == Event::MouseButtonPressed && !press) {

		if (event.key.code == Mouse::Left) {

			press = true;
			return true;
		}

	};

	if (!(press)) return false;

	if (press) {

		if (!(event.type == Event::MouseButtonPressed)) {

			press = false;

		}

		return false;

	}
}

// �������� �� ��������� ����
bool Button::pointedMouse(Event& event, Vector2f  pos) {
	if (button.getGlobalBounds().contains(pos.x, pos.y)) return true;

	else return false;
}

//�������� ������� �������� ������ 
void Button::setButtonSize(float W, float H) {

	w = W;
	h = H;

	button.setSize(Vector2f(W, H));

}

//�������� �������
void Button::setPosition(float x, float y){

	button.setPosition(x, y);

}

//�������� ���� ��������
void Button::setFillRecktangelColor(float R, float G, float B) {

	button.setFillColor(Color(R, G, B));

}