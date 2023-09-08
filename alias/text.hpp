#pragma once
#ifndef _TEXT HPP_
#define _TEXT HPP_

#include <iostream>
#include <random>
#include <fstream>
#include <string>
#include <sstream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

class text {
private:

	string title;
	Font font;

public:

	Text txt;
	text(String shribeName);

	void setString(string name);

	virtual void setPosition(float x, float y);

	void setFillTextColor(float R, float G1, float B);

	void setCharacterSize(float a);

	virtual void draw(RenderWindow& window);


};
#endif