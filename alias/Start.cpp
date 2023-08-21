#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <SFML/Graphics.hpp>
#include "InputWordsAndClues.hpp"
#include "Text.hpp"
#include "Button.hpp"
#include "Start.hpp"
using namespace std;
using namespace sf;


int WordOutput(RenderWindow& window, string* WordsAndCluesArr)
{
	if (window.isOpen()) {
		for (int i = 0; i < 1; i++)
		{
			InputWordsAndClues(WordsAndCluesArr);
			string wordString = WordsAndCluesArr[0];

			text word(wordString);
			word.setPosition(525, 498);
			word.setFillTextColor(0, 0, 0);
			word.setCharacterSize(85);

			word.draw(window);
		}
		
	}
	


	return 0;
}

int Start(RenderWindow& window)
{
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

	// �������� ���������� ��� ������ ���� � ���������

	string* WordsAndCluesArr = new string;
	string* WordsAndCluesArrtwo = new string;
	
	InputWordsAndClues(WordsAndCluesArr);

	string wordString = WordsAndCluesArr[0];

	text word(wordString);
	word.setPosition(2000, 2000);
	word.setFillTextColor(0, 0, 0);
	word.setCharacterSize(85);


	// �������� ������ Play (::������� ����)
	Button play_b(500, 70, "                  Play");
	play_b.setFillRecktangelColor(202, 189, 233);
	play_b.setFillTextColor(0, 0, 0);
	play_b.setPosition(835, 611);
	play_b.setCharacterSize(48);

	// �������� ������ Rules (::������� ����)
	Button rules_b(500, 70, "                 Rules");
	rules_b.setFillRecktangelColor(202, 189, 233);
	rules_b.setFillTextColor(0, 0, 0);
	rules_b.setPosition(835, 718);
	rules_b.setCharacterSize(48);

	// �������� ������ Back 
	Button back_b(105, 55, "Back");
	back_b.setFillRecktangelColor(149, 165, 58);
	back_b.setFillTextColor(255, 255, 221);
	back_b.setPosition(2000, 2000);
	back_b.setCharacterSize(48);

	// �������� ������ Player vs Player
	Button playermode_b(805, 155, "\n                    Player vs player");
	playermode_b.setFillRecktangelColor(149, 165, 58);
	playermode_b.setFillTextColor(255, 255, 221);
	playermode_b.setPosition(2000, 2000);
	playermode_b.setCharacterSize(48);

	// �������� ��������� ������ ready
	Button ready_b(660, 70, "             We are ready!");
	ready_b.setFillRecktangelColor(149, 165, 58);
	ready_b.setFillTextColor(255, 255, 221);
	ready_b.setPosition(2000, 2000);
	ready_b.setCharacterSize(48);

	// �������� ������ guessed

	Button guessed_b(390, 65, "          guessed!");
	guessed_b.setFillRecktangelColor(149, 165, 58);
	guessed_b.setFillTextColor(255, 255, 221);
	guessed_b.setPosition(2000, 2000);
	guessed_b.setCharacterSize(48);

	// �������� ������ skip

	Button skip_b(390, 65, "             skip");
	skip_b.setFillRecktangelColor(149, 165, 58);
	skip_b.setFillTextColor(255, 255, 221);
	skip_b.setPosition(2000, 2000);
	skip_b.setCharacterSize(48);


	/*//�������� ������ ��� �������
	text time_text("00:00");
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
	sf::String stringSeconds; //   ��� ���������� ������������� ��� �������� �������� ������ int � ��������� �������.*/






	if (window.isOpen())
	{

		Vector2i mouse = Mouse::getPosition(window);
		Vector2f mousePositon = window.mapPixelToCoords(mouse);

		Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();

		}
		/*//�������� ������� (����������� ����� �� ������� ������)

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

		if (timerString == "00:00")//(stringMilliseconds == "00" && stringSeconds == "00")   //if (duration == 0)  //if (intSeconds == 0 && intMilliseconds == 0)
			{
				/*if (!window_background.loadFromFile("images/player_game_second_window.png")) return 4;
				background.setTexture(&window_background);
				if (!window_background.loadFromFile("images/game_window.png")) return 4;
				background.setTexture(&window_background);

				back_b.setPosition(135, 85);

				time_text.setPosition(2000, 2000);
				playermode_b.setPosition(2000, 2000);
				pcmode_b.setPosition(2000, 2000);
				rules_b.setPosition(2000, 2000);
				play_b.setPosition(2000, 2000);
				ready_b.setPosition(2000, 2000);
			}*/


		// ������ Play
		if (play_b.pointedMouse(event, mousePositon)) {

			play_b.setFillRecktangelColor(255, 216, 132);

		}
		else
		{
			play_b.setFillRecktangelColor(202, 189, 233);

		}

		if (play_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/mode_window.png")) return 4;
			background.setTexture(&window_background);

			back_b.setPosition(135, 85);
			playermode_b.setPosition(317, 450);

			play_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);
		}

		// ������ Rules
		if (rules_b.pointedMouse(event, mousePositon)) {

			rules_b.setFillRecktangelColor(255, 216, 132);

		}
		else
		{
			rules_b.setFillRecktangelColor(202, 189, 233);

		}

		if (rules_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/rules_window.png")) return 4;
			background.setTexture(&window_background);

			back_b.setPosition(135, 85);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);
		}


		// ������ Back
		if (back_b.pointedMouse(event, mousePositon)) {

			back_b.setFillTextColor(255, 216, 132);

		}
		else
		{
			back_b.setFillTextColor(255, 255, 221);

		}

		if (back_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/main_window.png")) return 4;
			background.setTexture(&window_background);

			back_b.setPosition(2000, 2000);    // �������
			//time_text.setPosition(2000, 2000); // �������
			playermode_b.setPosition(2000, 2000);
			play_b.setPosition(835, 611);      // ����������
			rules_b.setPosition(835, 718);     // ����������
			ready_b.setPosition(2000, 2000);
		}

		// ������ Player vs player

		if (playermode_b.pointedMouse(event, mousePositon)) {

			playermode_b.setFillRecktangelColor(255, 216, 132);
			playermode_b.setFillTextColor(0, 0, 0);

		}
		else
		{
			playermode_b.setFillRecktangelColor(149, 165, 58);
			playermode_b.setFillTextColor(255, 255, 221);

		}

		if (playermode_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/player_game_first_window.png")) return 4;
			background.setTexture(&window_background);

			back_b.setPosition(135, 85);
			ready_b.setPosition(650, 625);

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);

			//Time time = timer.restart();
			//time_text.setPosition(147, 625);



		}

		// ������ ready

		if (ready_b.pointedMouse(event, mousePositon)) {

			ready_b.setFillRecktangelColor(255, 216, 132);
			ready_b.setFillTextColor(0, 0, 0);

		}
		else
		{
			ready_b.setFillRecktangelColor(149, 165, 58);
			ready_b.setFillTextColor(255, 255, 221);

		}

		if (ready_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/game_window.png")) return 4;
			background.setTexture(&window_background);

			WordOutput(window, WordsAndCluesArr);
			//word.setPosition(525, 498);
			guessed_b.setPosition(316, 726);
			skip_b.setPosition(769, 726);

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			//time_text.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);
		}

		// ������ guessed

		if (guessed_b.pointedMouse(event, mousePositon)) {

			guessed_b.setFillRecktangelColor(255, 216, 132);
			guessed_b.setFillTextColor(0, 0, 0);

		}
		else
		{
			guessed_b.setFillRecktangelColor(149, 165, 58);
			guessed_b.setFillTextColor(255, 255, 221);

		}

		if (guessed_b.pressed(event, mousePositon)) {

			InputWordsAndClues(WordsAndCluesArr);

			//word.setPosition(525, 498);
			skip_b.setPosition(769, 726);

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			//time_text.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);

		}

		// ������ skip

		if (skip_b.pointedMouse(event, mousePositon)) {

			skip_b.setFillRecktangelColor(255, 216, 132);
			skip_b.setFillTextColor(0, 0, 0);

		}
		else
		{
			skip_b.setFillRecktangelColor(149, 165, 58);
			skip_b.setFillTextColor(255, 255, 221);

		}

		if (skip_b.pressed(event, mousePositon)) {


			//word.setPosition(525, 498);

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			//time_text.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);
			
		}

		

		window.clear();
		window.draw(background);

		word.draw(window);
		play_b.draw(window);
		rules_b.draw(window);
		back_b.draw(window);
		playermode_b.draw(window);
		ready_b.draw(window);
		guessed_b.draw(window);
		skip_b.draw(window);

		//wordButton.draw(window);
		//time_text.draw(window);
		//word.draw(window);
		window.display();
	}

	return 0;
}