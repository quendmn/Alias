#include <iostream>
#include <SFML/Graphics.hpp>
#include "Text.hpp"
using namespace std;
using namespace sf;
#pragma once
#ifndef _BUTTON.HPP_
#define _BUTTON.HPP_

class Button :public text {
private:

	float w, h;

	bool press;

public:

	RectangleShape button;

	Button(float W, float H, string shribeName) :text(shribeName);
	
	void sleditForSprite(Sprite& s, float x, float y);

	void draw(RenderWindow& window);

	bool pressed(Event& event, Vector2f  pos);

	bool navediaMouse(Event& event, Vector2f  pos);

	void setButtonSize(float W, float H);

	void setOringCenter();

	void setPosition(float x, float y);

	void setFillRacktengelColor(float R, float G, float B);
};


#endif