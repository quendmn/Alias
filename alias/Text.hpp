#pragma once
#include "Button.hpp"
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

#ifndef _TEXT.HPP_
#define _TEXT.HPP_

class text {
private:

	string shribe;
	Font font;

public:

	Text txt;

	text(string shribeName);

	virtual void sleditForSprite(Sprite& s, float x, float y);

	void getChislo(float n);

	void setString(string name);

	virtual void setPosition(float x, float y);

	void setFillTextColor(float R, float G1, float B);

	void setCharacterSize(float a);

	virtual void draw(RenderWindow& window);

};

#endif