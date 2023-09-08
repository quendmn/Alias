#pragma once
#ifndef _BUTTON HPP_
#define _BUTTON HPP_

#include <iostream>
#include <random>
#include <fstream>
#include <string>
#include <sstream>
#include <SFML/Graphics.hpp>
#include "Text.hpp"

using namespace std;
using namespace sf;

class Button :public text {
private:

	float w, h; //ширина и высота кнопки

	bool press;   // нажата ли


public:

	RectangleShape button; //сам квадрат

	Button(float W, float H, string titleName) :text(titleName){
		w = W;
		h = H;

		press = false;

		button.setSize(Vector2f(W, H));

		txt.setPosition(button.getPosition());
	};

	void followSprite(Sprite& s, float x, float y) override;

	void draw(RenderWindow& window)override;

	bool pressed(Event& event, Vector2f  pos);

	bool pointedMouse(Event& event, Vector2f  pos);

	void setButtonSize(float W, float H);

	void setOringCenter();

	void setPosition(float x, float y)  override;

	void setFillRecktangelColor(float R, float G, float B);

};
#endif