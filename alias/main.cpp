#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

// класс для текста
/*class text_two
{
private:
	Text mtext;  //объект текста
	float xpos;
	float ypos;
	String str; // сам текст
	int size_font = 48;
	Color menu_text_color = Color::Black;
	Font font;
public:
	text_two(Text& mtext, float xpos, float ypos, String str, int size_font,
		Color menu_text_color, Font font){
	
		font.loadFromFile("font/Forum.ttf");
		mtext.setFont(font);
		mtext.setCharacterSize(size_font);
		mtext.setPosition(xpos, ypos);
		mtext.setString(str);
		mtext.setFillColor(menu_text_color);
		
	}
	//текст будет следить за спрайтом
	virtual void sleditForSprite(Sprite& s, float x, float y) {

		mtext.setPosition(s.getPosition().x + x, s.getPosition().y + y);

	}

	//дать число тексту
	void getChislo(float n) {

		ostringstream chislo;

		chislo << n;

		mtext.setString(str + chislo.str());

	}

	//ф-я для текста
	void setString(string name) {

		mtext.setString(name);

	}

	virtual void setPosition(float x, float y) {

		mtext.setPosition(x, y);

	}

	void setFillTextColor(float R, float G1, float B) {

		mtext.setFillColor(Color(R, G1, B));

	}

	//поменять размер шрифта
	void setCharacterSize(float a) {

		mtext.setCharacterSize(a);

	}

	//нарисовать в окне
	virtual void draw(RenderWindow& window) {

		window.draw(mtext);

	};
};*/
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
	// создание окна #1
	RenderWindow window(sf::VideoMode(1440, 900), "Alias");

	RectangleShape background(Vector2f(1440, 900));
	Texture main_window;
	if (!main_window.loadFromFile("images/main_window.png")) return 4;
	background.setTexture(&main_window);

	// создание кнопки главного экрана
	Button play_b(500, 70, "                  Play");
	play_b.setFillRacktengelColor(202, 189, 233);
	play_b.setFillTextColor(0, 0, 0);
	play_b.setPosition(835, 611);
	play_b.setCharacterSize(48);

	Button rules_b(500, 70, "                 Rules");
	rules_b.setFillRacktengelColor(202, 189, 233);
	rules_b.setFillTextColor(0, 0, 0);
	rules_b.setPosition(835, 718);
	rules_b.setCharacterSize(48);
	
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

			if (!main_window.loadFromFile("images/game_window.png")) return 4;
			background.setTexture(&main_window);

			play_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
		}

		// кнопка rules
		if (rules_b.navediaMouse(event, mousePositon)) {

			rules_b.setFillRacktengelColor(255, 216, 132);

		}
		else
		{
			rules_b.setFillRacktengelColor(202, 189, 233);

		}

		if (rules_b.pressed(event, mousePositon)) {

			if (!main_window.loadFromFile("images/rules_window.png")) return 4;
			background.setTexture(&main_window);

			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
		}
		if (rules_b.pressed(event, mousePositon)) {
				if (!main_window.loadFromFile("images/rules_window.png")) return 4;
				background.setTexture(&main_window);

				rules_b.setPosition(2000, 2000);
				rules_b.setPosition(2000, 2000);
			
			
		}

		window.clear();
		window.draw(background);
		play_b.draw(window);
		rules_b.draw(window);
		window.display();
	}



	return 0;
}

