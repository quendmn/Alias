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

	// ����� ���������� �����
	Font font;
	font.loadFromFile("font/Forum.ttf");

	int score = 0;
	std::ostringstream ss;
	ss << score;

	sf::Text score_t;
	score_t.setFont(font);
	score_t.setCharacterSize(48);
	score_t.setFillColor(Color::Black);
	score_t.setPosition(2000, 2000);
	score_t.setString(ss.str());

	// �������� ���������� ��� ������ ���� � ���������
	// �� ������ ������� �������� �������� ��������� neededline � �������
	int counter = 1;

	//������ ������ 
	string* WordsAndCluesArr_one = new string;
	InputWordsAndClues_one(WordsAndCluesArr_one);
	string wordString_one = WordsAndCluesArr_one[0];

	text word_one(wordString_one);
	word_one.setPosition(2000, 2000);
	word_one.setFillTextColor(0, 0, 0);
	word_one.setCharacterSize(85);


	 //������ ������ 
	string* WordsAndCluesArr_two = new string;
	InputWordsAndClues_two(WordsAndCluesArr_two);
	string wordString_two = WordsAndCluesArr_two[0];

	text word_two(wordString_two);
	word_two.setPosition(2000, 2000);
	word_two.setFillTextColor(0, 0, 0);
	word_two.setCharacterSize(85);

	//������ ������ 
	string* WordsAndCluesArr_three = new string;
	InputWordsAndClues_three(WordsAndCluesArr_three);
	string wordString_three = WordsAndCluesArr_three[0];
	
	text word_three(wordString_three);
	word_three.setPosition(2000, 2000);
	word_three.setFillTextColor(0, 0, 0);
	word_three.setCharacterSize(85);
	 
	//��������� ������ 
	string* WordsAndCluesArr_four = new string;
	InputWordsAndClues_four(WordsAndCluesArr_four);
	string wordString_four = WordsAndCluesArr_four[0];

	text word_four(wordString_four);
	word_four.setPosition(2000, 2000);
	word_four.setFillTextColor(0, 0, 0);
	word_four.setCharacterSize(85);

	//����� ������ 
	string* WordsAndCluesArr_five = new string;
	InputWordsAndClues_five(WordsAndCluesArr_five);
	string wordString_five = WordsAndCluesArr_five[0];

	text word_five(wordString_five);
	word_five.setPosition(2000, 2000);
	word_five.setFillTextColor(0, 0, 0);
	word_five.setCharacterSize(85);

	//������ ������
	string* WordsAndCluesArr_six = new string;
	InputWordsAndClues_six(WordsAndCluesArr_six);
	string wordString_six = WordsAndCluesArr_six[0];

	text word_six(wordString_six);
	word_six.setPosition(2000, 2000);
	word_six.setFillTextColor(0, 0, 0);
	word_six.setCharacterSize(85);

	//������� ������
	string* WordsAndCluesArr_seven = new string;
	InputWordsAndClues_seven(WordsAndCluesArr_seven);
	string wordString_seven = WordsAndCluesArr_seven[0];

	text word_seven(wordString_seven);
	word_seven.setPosition(2000, 2000);
	word_seven.setFillTextColor(0, 0, 0);
	word_seven.setCharacterSize(85);

	//������� ������
	string* WordsAndCluesArr_eight = new string;
	InputWordsAndClues_eight(WordsAndCluesArr_eight);
	string wordString_eight = WordsAndCluesArr_eight[0];

	text word_eight(wordString_eight);
	word_eight.setPosition(2000, 2000);
	word_eight.setFillTextColor(0, 0, 0);
	word_eight.setCharacterSize(85);

	//������� ������
	string* WordsAndCluesArr_nine = new string;
	InputWordsAndClues_nine(WordsAndCluesArr_nine);
	string wordString_nine = WordsAndCluesArr_nine[0];

	text word_nine(wordString_nine);
	word_nine.setPosition(2000, 2000);
	word_nine.setFillTextColor(0, 0, 0);
	word_nine.setCharacterSize(85);

	//������� ������
	string* WordsAndCluesArr_ten = new string;
	InputWordsAndClues_ten(WordsAndCluesArr_ten);
	string wordString_ten = WordsAndCluesArr_ten[0];

	text word_ten(wordString_ten);
	word_ten.setPosition(2000, 2000);
	word_ten.setFillTextColor(0, 0, 0);
	word_ten.setCharacterSize(85);


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

			word_one.setPosition(2000,2000);
			word_two.setPosition(2000, 2000);
			word_three.setPosition(2000, 2000);
			word_four.setPosition(2000, 2000);
			word_five.setPosition(2000, 2000);
			word_six.setPosition(2000, 2000);
			word_seven.setPosition(2000, 2000);
			word_eight.setPosition(2000, 2000);
			word_nine.setPosition(2000, 2000);
			word_ten.setPosition(2000, 2000);
			back_b.setPosition(2000, 2000);    
			playermode_b.setPosition(2000, 2000);
			guessed_b.setPosition(2000, 2000);
			skip_b.setPosition(2000, 2000);
			play_b.setPosition(835, 611);      
			rules_b.setPosition(835, 718);     
			ready_b.setPosition(2000, 2000);
			guessed_b.setPosition(2000, 2000);
			skip_b.setPosition(2000, 2000);
			word.setPosition(2000, 2000);


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
			word_one.setPosition(2000, 2000);
			word_two.setPosition(2000, 2000);
			word_three.setPosition(2000, 2000);
			word_four.setPosition(2000, 2000);
			word_five.setPosition(2000, 2000);
			word_six.setPosition(2000, 2000);
			word_seven.setPosition(2000, 2000);
			word_eight.setPosition(2000, 2000);
			word_nine.setPosition(2000, 2000);
			word_ten.setPosition(2000, 2000);

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

			word_one.setPosition(525, 498);

			guessed_b.setPosition(316, 726);
			skip_b.setPosition(769, 726);

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			//time_text.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);
			word_two.setPosition(2000, 2000);
			word_three.setPosition(2000, 2000);
			word_four.setPosition(2000, 2000);
			word_five.setPosition(2000, 2000);
			word_six.setPosition(2000, 2000);
			word_seven.setPosition(2000, 2000);
			word_eight.setPosition(2000, 2000);
			word_nine.setPosition(2000, 2000);
			word_ten.setPosition(2000, 2000);
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

			skip_b.setPosition(769, 726);
			counter++;
			score++;
			if (counter == 2)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(545, 498);
			}
			if (counter == 3)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);

				word_three.setPosition(545, 498);
			}
			if (counter == 4)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);

				word_four.setPosition(545, 498);
			}
			if (counter == 5)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);

				word_five.setPosition(545, 498);
			}
			if (counter == 6)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);

				word_six.setPosition(545, 498);
			}
			if (counter == 7)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);

				word_seven.setPosition(545, 498);
			}
			if (counter == 8)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);

				word_eight.setPosition(545, 498);
			}
			if (counter == 9)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);

				word_nine.setPosition(545, 498);
			}
			if (counter == 10)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);

				word_ten.setPosition(545, 498);


				

			}
			if (counter == 11)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);

				if (!window_background.loadFromFile("images/statistics_window.png")) return 4;
				background.setTexture(&window_background);

				guessed_b.setPosition(2000, 2000);
				skip_b.setPosition(2000, 2000);
				score_t.setPosition(1190, 510);
			}
		

			
			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
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

			counter++;
			if (counter == 2)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(545, 498);
			}
			if (counter == 3)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);

				word_three.setPosition(545, 498);
			}
			if (counter == 4)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);

				word_four.setPosition(545, 498);
			}
			if (counter == 5)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);

				word_five.setPosition(545, 498);
			}
			if (counter == 6)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);

				word_six.setPosition(545, 498);
			}
			if (counter == 7)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);

				word_seven.setPosition(545, 498);
			}
			if (counter == 8)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);

				word_eight.setPosition(545, 498);
			}
			if (counter == 9)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);

				word_nine.setPosition(545, 498);
			}
			if (counter == 10)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);

				word_ten.setPosition(545, 498);

			}

			if (counter == 11)
			{
				word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);

				if (!window_background.loadFromFile("images/statistics_window.png")) return 4;
				background.setTexture(&window_background);

				guessed_b.setPosition(2000, 2000);
				skip_b.setPosition(2000, 2000);
				score_t.setPosition(1190, 510);
			}

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);
			
		}
		
		window.clear();
		window.draw(background);
		window.draw(score_t);

		word_one.draw(window);
		word_two.draw(window);
		word_three.draw(window);
		word_four.draw(window);
		word_five.draw(window);
		word_six.draw(window);
		word_seven.draw(window);
		word_eight.draw(window);
		word_nine.draw(window);
		word_ten.draw(window);

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