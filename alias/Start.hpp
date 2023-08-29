#pragma once
#ifndef _START HPP_
#define _START HPP_

#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <SFML/Graphics.hpp>
#include "InputWordsAndClues.hpp"
#include "Text.hpp"
#include "Button.hpp"
using namespace std;
using namespace sf;

int Start(RenderWindow& window, std::vector<string> Words, int *arr);


#endif