#ifndef _BUTTON HPP_
#define _BUTTON HPP_

#include <iostream>
#include <random>
#include <fstream>
#include <string>
#include <sstream>
#include <SFML/Graphics.hpp>
#include "text.hpp"

using namespace std;
using namespace sf;

class Button :public text {
private:

	float w, h; //������ � ������ ������

	bool press;   // ������ ��


public:

	RectangleShape button; //��� ��������

	Button(float W, float H, string shribeName) :text(shribeName){
		w = W;
		h = H;

		press = false;

		button.setSize(Vector2f(W, H));

		txt.setPosition(button.getPosition());
	};

	void sleditForSprite(Sprite& s, float x, float y) override;

	void draw(RenderWindow& window)override;

	bool pressed(Event& event, Vector2f  pos);

	bool navediaMouse(Event& event, Vector2f  pos);

	void setButtonSize(float W, float H);

	void setOringCenter();

	void setPosition(float x, float y)  override;

	void setFillRacktengelColor(float R, float G, float B);

};
#endif