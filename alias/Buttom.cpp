#include "Button.hpp"

Button(float W, float H, string shribeName) :text(shribeName) {


	w = W;
	h = H;

	press = false;

	button.setSize(Vector2f(W, H));

	txt.setPosition(button.getPosition());

}

//������ ������ �� ��������
void sleditForSprite(Sprite& s, float x, float y) override {

	button.setPosition(s.getPosition().x + x, s.getPosition().y + y);
	txt.setPosition(s.getPosition().x + x, s.getPosition().y + y);

}

//������ � �����(�������) � �����
void draw(RenderWindow& window)override {

	txt.setPosition(button.getPosition());


	window.draw(button);
	window.draw(txt);
}

//�������
bool pressed(Event& event, Vector2f  pos) {

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