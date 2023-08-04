#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <SFML/Graphics.hpp>
#include "InputWordsAndClues.hpp"
using namespace std;
using namespace sf;



// ����� ������
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

		//��������� ����
		txt.setFillColor(Color(0, 0, 0));

		txt.setString(shribeName);

		shribe = shribeName;

	}

	//����� ����� ������� �� ��������
	virtual void sleditForSprite(Sprite& s, float x, float y) {

		txt.setPosition(s.getPosition().x + x, s.getPosition().y + y);

	}

	//���� ����� ������
	void getChislo(float n) {

		ostringstream chislo;

		chislo << n;

		txt.setString(shribe + chislo.str());

	}

	//�-� ��� ������
	void setString(string name) {

		txt.setString(name);

	}

	virtual void setPosition(float x, float y) {

		txt.setPosition(x, y);

	}

	void setFillTextColor(float R, float G1, float B) {

		txt.setFillColor(Color(R, G1, B));

	}

	//�������� ������ ������
	void setCharacterSize(float a) {

		txt.setCharacterSize(a);

	}

	//���������� � ����
	virtual void draw(RenderWindow& window) {

		window.draw(txt);

	};


};

//����� ������
class Button :public text {
private:

	float w, h; //������ � ������ ������

	bool press;   // ������ ��


public:

	RectangleShape button; //��� ��������

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

	};

	//�����e�� �����
	bool navediaMouse(Event& event, Vector2f  pos) {

		if (button.getGlobalBounds().contains(pos.x, pos.y)) return true;

		else return false;

	}

	//�������� ������� �������� ������ 
	void setButtonSize(float W, float H) {

		w = W;
		h = H;

		button.setSize(Vector2f(W, H));

	}

	//�������� �� ����� 
	void setOringCenter() {

		button.setOrigin(w/2, h/2);
	}

	//�������� �������
	void setPosition(float x, float y)  override {

		button.setPosition(x, y);

	}
	//�������� ���� ��������
	void setFillRacktengelColor(float R, float G, float B) {

		button.setFillColor(Color(R, G, B));

	}
};

void Timer(text& a, float duration, String timerString, Clock &timer) {
	a.setPosition(650, 450);
	Time time = timer.restart();
	if (duration > 0) {
		duration -= time.asSeconds();
		timerString = std::to_string(duration);
		a.setString(timerString);
	}
}

int main()
{
	// �������� ���� #1 (������� ����)
	RenderWindow window(sf::VideoMode(1440, 900), "Alias");

	RectangleShape background(Vector2f(1440, 900));
	Texture window_background;
	if (!window_background.loadFromFile("images/main_window.png")) return 4;
	background.setTexture(&window_background);

	// �������� ������

	Image icon;
	if (!icon.loadFromFile("images/icon.png"))
	{
		return 1;
	}
	window.setIcon(32, 32, icon.getPixelsPtr());


	// �������� ������ Play (::������� ����)
	Button play_b(500, 70, "                  Play");
	play_b.setFillRacktengelColor(202, 189, 233);
	play_b.setFillTextColor(0, 0, 0);
	play_b.setPosition(835, 611);
	play_b.setCharacterSize(48);

	// �������� ������ Rules (::������� ����)
	Button rules_b(500, 70, "                 Rules");
	rules_b.setFillRacktengelColor(202, 189, 233);
	rules_b.setFillTextColor(0, 0, 0);
	rules_b.setPosition(835, 718);
	rules_b.setCharacterSize(48);
	
	// �������� ������ Back 
	Button back_b(105, 55, "Back");
	back_b.setFillRacktengelColor(149, 165, 58);
	back_b.setFillTextColor(255, 255, 221);
	back_b.setPosition(2000, 2000);
	back_b.setCharacterSize(48);

	// �������� ������ Player vs Player
	Button playermode_b(805, 155, "\n                    Player vs player");
	playermode_b.setFillRacktengelColor(149, 165, 58);
	playermode_b.setFillTextColor(255, 255, 221);
	playermode_b.setPosition(2000, 2000);
	playermode_b.setCharacterSize(48);

	// �������� ������ Player vs pc
	Button pcmode_b(805, 155, "\n                       Player vs pc");
	pcmode_b.setFillRacktengelColor(149, 165, 58);
	pcmode_b.setFillTextColor(255, 255, 221);
	pcmode_b.setPosition(2000, 2000);
	pcmode_b.setCharacterSize(48);

	//�������� ������ ��� �������
	text time_text("00:000");
	time_text.setPosition(2000, 2000);
	time_text.setFillTextColor(0, 0, 0);
	time_text.setCharacterSize(60);


	//�������� �������
	Clock timer;
	float duration = 10.0f;
	String timerString;
	float fMilliseconds, fSeconds; //���������� ��� ��������  �������� � ��������� ������ � �������� � ������������
	int intMilliseconds, intSeconds;// ����� ����������, �� ��� int
	sf::String stringMilliseconds;// ���������� ��� �������� �������� int � ������������(!) � ��������� �������
	sf::String stringSeconds; //   ��� ���������� ������������� ��� �������� �������� ������ int � ��������� �������.
	
	



	
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
		//�������� ������� (����������� ����� �� ������� ������)
		 
		Time time = timer.restart();

		if (duration > 0) {// ����� ��� �������������� ������� �� ���������
			duration -= time.asSeconds();
			fMilliseconds = modf(duration, &fSeconds);
			intSeconds = static_cast<int>(fSeconds);
			intMilliseconds = static_cast<int>(fMilliseconds * 100);
			stringMilliseconds = std::to_string(intMilliseconds);
			stringSeconds = std::to_string(intSeconds);

			if (intMilliseconds <= 0) {
				stringMilliseconds = "00";
			}
			if (intSeconds <= 0) {
				stringSeconds = "00";
			}
			else if (intSeconds < 10) {
				stringSeconds = "0" + stringSeconds;
			}
			timerString = stringSeconds + ":" + stringMilliseconds;
			time_text.setString(timerString);// ����� ������� � ����� 
		}



	
		// ������ Play
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

		// ������ Rules
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
		

		// ������ Back
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

			back_b.setPosition(2000, 2000);// �������
			time_text.setPosition(2000, 2000);//�������
			play_b.setPosition(835, 611);    // ����������
			rules_b.setPosition(835, 718);   // ����������
		}

		// ������ Player vs player

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

			if (!window_background.loadFromFile("images/player_game_first_window.png")) return 4;
			background.setTexture(&window_background);

			back_b.setPosition(135, 85);

			playermode_b.setPosition(2000, 2000);
			pcmode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);

			time_text.setPosition(571, 625);
			Time time = timer.restart();
			
			/*if (stringMilliseconds == "00" && stringSeconds == "00")   //if (duration == 0)  //if (intSeconds == 0 && intMilliseconds == 0)
			{
				if (!window_background.loadFromFile("images/player_game_second_window.png")) return 4;
				background.setTexture(&window_background);

				back_b.setPosition(135, 85);

				time_text.setPosition(2000, 2000);
				playermode_b.setPosition(2000, 2000);
				pcmode_b.setPosition(2000, 2000);
				rules_b.setPosition(2000, 2000);
				play_b.setPosition(2000, 2000);
			}*/

		}

		

		// ������ Player vs pc

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
		playermode_b.draw(window);
		pcmode_b.draw(window);
		time_text.draw(window);

		window.display();
	}



	return 0;
}

