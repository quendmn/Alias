#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

// класс текста
class text {
private:

	string shribe;
	Font font;

public:

	Text txt;

	text(String shribeName) {

		font.loadFromFile("font/Forum.ttf");

		txt.setFont(font);
		txt.setCharacterSize(20);

		//начальный цвет
		txt.setFillColor(Color(0, 0, 0));

		txt.setString(shribeName);

		shribe = shribeName;

	}

	//текст будет следить за спрайтом
	virtual void sleditForSprite(Sprite& s, float x, float y) {

		txt.setPosition(s.getPosition().x + x, s.getPosition().y + y);

	}

	//дать число тексту
	void getChislo(float n) {

		ostringstream chislo;

		chislo << n;

		txt.setString(shribe + chislo.str());

	}

	//ф-я для текста
	void setString(string name) {

		txt.setString(name);

	}

	virtual void setPosition(float x, float y) {

		txt.setPosition(x, y);

	}

	void setFillTextColor(float R, float G1, float B) {

		txt.setFillColor(Color(R, G1, B));

	}

	//поменять размер шрифта
	void setCharacterSize(float a) {

		txt.setCharacterSize(a);

	}

	//нарисовать в окне
	virtual void draw(RenderWindow& window) {

		window.draw(txt);

	};


};

//класс кнопки
class Button :public text {
private:

	float w, h; //ширина и высота кнопки

	bool press;   // нажата ли


public:

	RectangleShape button; //сам крвадрат

	Button(float W, float H, string shribeName) :text(shribeName) {


		w = W;
		h = H;

		press = false;

		button.setSize(Vector2f(W, H));

		txt.setPosition(button.getPosition());

	}

	//кнопка следит за спрайтом
	void sleditForSprite(Sprite& s, float x, float y) override {

		button.setPosition(s.getPosition().x + x, s.getPosition().y + y);
		txt.setPosition(s.getPosition().x + x, s.getPosition().y + y);

	}

	//рисуеи и кнопк(квадрат) и текст
	void draw(RenderWindow& window)override {

		txt.setPosition(button.getPosition());


		window.draw(button);
		window.draw(txt);
	}

	//нажатие
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

	};

	//наведeна мышка
	bool navediaMouse(Event& event, Vector2f  pos) {

		if (button.getGlobalBounds().contains(pos.x, pos.y)) return true;

		else return false;

	}

	//поменять размеры квадрата кнопки 
	void setButtonSize(float W, float H) {

		w = W;
		h = H;

		button.setSize(Vector2f(W, H));

	}

	//Поменять на центр 
	void setOringCenter() {

		button.setOrigin(w/2, h/2);
	}

	//поменять позицию
	void setPosition(float x, float y)  override {

		button.setPosition(x, y);

	}
	//поменять цвет квадрата
	void setFillRacktengelColor(float R, float G, float B) {

		button.setFillColor(Color(R, G, B));

	}
};

int main()
{
	// создание окна #1 (главное меню)
	RenderWindow window(sf::VideoMode(1440, 900), "Alias");

	RectangleShape background(Vector2f(1440, 900));
	Texture window_background;
	if (!window_background.loadFromFile("images/main_window.png")) return 4;
	background.setTexture(&window_background);

	// создание кнопки Play (::главное меню)
	Button play_b(500, 70, "                  Play");
	play_b.setFillRacktengelColor(202, 189, 233);
	play_b.setFillTextColor(0, 0, 0);
	play_b.setPosition(835, 611);
	play_b.setCharacterSize(48);

	// создание кнопки Rules (::главное меню)
	Button rules_b(500, 70, "                 Rules");
	rules_b.setFillRacktengelColor(202, 189, 233);
	rules_b.setFillTextColor(0, 0, 0);
	rules_b.setPosition(835, 718);
	rules_b.setCharacterSize(48);
	
	// создание кнопки Back 
	Button back_b(105, 55, "Back");
	back_b.setFillRacktengelColor(149, 165, 58);
	back_b.setFillTextColor(255, 255, 221);
	back_b.setPosition(2000, 2000);
	back_b.setCharacterSize(48);

	// создание кнопки режимa с игроками
	Button playermode_b(805, 155, "Player vs player");
	playermode_b.setFillRacktengelColor(149, 165, 58);
	playermode_b.setFillTextColor(255, 255, 221);
	playermode_b.setPosition(2000, 2000);
	playermode_b.setCharacterSize(48);

	// создание кнопки режимa с пк
	Button pcmode_b(805, 155, "Player vs pc");
	pcmode_b.setFillRacktengelColor(149, 165, 58);
	pcmode_b.setFillTextColor(255, 255, 221);
	pcmode_b.setPosition(2000, 2000);
	pcmode_b.setCharacterSize(48);


	
	while (window.isOpen())
	{

		Vector2i mouse = Mouse::getPosition(window);
		Vector2f mousePositon = window.mapPixelToCoords(mouse);

		Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();

		}
	
		// кнопка Play
		if (play_b.navediaMouse(event, mousePositon)) {

			play_b.setFillRacktengelColor(255, 216, 132);

		}
		else
		{
			play_b.setFillRacktengelColor(202, 189, 233);

		}

		if (play_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/mode_window.png")) return 4;
			background.setTexture(&window_background);

			back_b.setPosition(135, 85);
			playermode_b.setPosition(317, 312);
			pcmode_b.setPosition(317, 563);

			play_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
		}

		// кнопка Rules
		if (rules_b.navediaMouse(event, mousePositon)) {

			rules_b.setFillRacktengelColor(255, 216, 132);

		}
		else
		{
			rules_b.setFillRacktengelColor(202, 189, 233);

		}

		if (rules_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/rules_window.png")) return 4;
			background.setTexture(&window_background);

			back_b.setPosition(135, 85);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
		}

		// кнопка Back
		if (back_b.navediaMouse(event, mousePositon)) {

			back_b.setFillTextColor(255, 216, 132);

		}
		else
		{
			back_b.setFillTextColor(255, 255, 221);

		}

		if (back_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/main_window.png")) return 4;
			background.setTexture(&window_background);

			back_b.setPosition(2000, 2000);  // убираем
			play_b.setPosition(835, 611);    // возвращаем
			rules_b.setPosition(835, 718);   // возвращаем
		}

		// кнопка Player vs Player

		if (playermode_b.navediaMouse(event, mousePositon)) {

			playermode_b.setFillRacktengelColor(255, 216, 132);
			playermode_b.setFillTextColor(0, 0, 0);

		}
		else
		{
			playermode_b.setFillRacktengelColor(149, 165, 58);
			playermode_b.setFillTextColor(255, 255, 221);

		}

		if (playermode_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/game_window.png")) return 4;
			background.setTexture(&window_background);

			back_b.setPosition(135, 85);
			pcmode_b.setPosition(2000, 2000);
			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
		}

		// кнопка Player vs pc

		if (pcmode_b.navediaMouse(event, mousePositon)) {

			pcmode_b.setFillRacktengelColor(255, 216, 132);
			pcmode_b.setFillTextColor(0, 0, 0);

		}
		else
		{
			pcmode_b.setFillRacktengelColor(149, 165, 58);
			pcmode_b.setFillTextColor(255, 255, 221);

		}

		/*if (pcmode_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/rules_window.png")) return 4;
			background.setTexture(&window_background);

			back_b.setPosition(135, 85);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
		}*/


		window.clear();
		window.draw(background);

		play_b.draw(window);
		rules_b.draw(window);
		back_b.draw(window);

		window.display();
	}



	return 0;
}

