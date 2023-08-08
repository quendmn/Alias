#include "Button.hpp"
#include <SFML/Graphics.hpp>

RectangleShape button;
//Button::Button(float W, float H, string titleName) :text(titleName){
//
//
//	w = W;
//	h = H;
//
//	press = false;
//
//	button.setSize(Vector2f(W, H));
//
//	txt.setPosition(button.getPosition());
//
//}
void Button::followSprite(Sprite& s, float x, float y){

	button.setPosition(s.getPosition().x + x, s.getPosition().y + y);
	txt.setPosition(s.getPosition().x + x, s.getPosition().y + y);
}

void Button::draw(RenderWindow& window) {
	txt.setPosition(button.getPosition());


	window.draw(button);
	window.draw(txt);
}

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
bool Button::pointedMouse(Event& event, Vector2f  pos) {
	if (button.getGlobalBounds().contains(pos.x, pos.y)) return true;

	else return false;
}

//поменять размеры квадрата кнопки 
void Button::setButtonSize(float W, float H) {

	w = W;
	h = H;

	button.setSize(Vector2f(W, H));

}
//Поменять на центр 
void Button::setOringCenter() {

	button.setOrigin(w / 2, h / 2);
}

//поменять позицию
void Button::setPosition(float x, float y){

	button.setPosition(x, y);

}

//поменять цвет квадрата
void Button::setFillRecktangelColor(float R, float G, float B) {

	button.setFillColor(Color(R, G, B));

}