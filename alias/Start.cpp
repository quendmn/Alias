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

// добавить дубликаты очков (1-1 2-2)
// кнопка back::убрать лишние элементы с главного экрана
// 13 слово появляется над 12 пофиксить
// размер текста кол-ва очков ^

int Start(RenderWindow& window, std::vector<string> Words, int *arr)
{
	RectangleShape background(Vector2f(1440, 900));
	Texture window_background;
	if (!window_background.loadFromFile("images/main_window.png")) return 4;
	background.setTexture(&window_background);
	
	// создание иконки
	
	Image icon;
	if (!icon.loadFromFile("images/icon.png"))
	{
		return 1;
	}
	window.setIcon(32, 32, icon.getPixelsPtr());
	//Image_Icon(icon, window);
	
	// вывод количества очков
	Font font;
	font.loadFromFile("font/Forum.ttf");
	
	int playerOne_score = 0;
	int playerTwo_score = 0;
	vector<string> Points{ "1", "2", "3", "4", "5", "6", "7", "8", "10", "11"};
	vector<string> Results{ "  Player #1 won!","Player #2 won!" ,"Friendship won! :)" };
	/*string one_s = "1";
	string two_s = "2";
	string three_s = "3";
	string four_s = "4";
	string five_s = "5";
	string six_s = "6";
	string seven_s = "7";
	string eight_s = "8";
	string nine_s = "9";
	string ten_s = "10";*/

	text scoreOne(Points[0]);
	scoreOne.setPosition(2000, 2000);
	scoreOne.setFillTextColor(0, 0, 0);
	scoreOne.setCharacterSize(64);
	std::string textScoreOne;
	text scoreTwo(Points[0]);
	scoreTwo.setPosition(2000, 2000);
	scoreTwo.setFillTextColor(0, 0, 0);
	scoreTwo.setCharacterSize(64);
	std::string textScoreTwo;
	
	/*string PlayerOneWon = "  Player #1 won!";
	string PlayerTwoWon = "Player #2 won!";
	string FriendshipWon = "Friendship won! :)";*/
	
	
	text Word(Words[arr[0]]);
	Word.setPosition(2000, 2000);
	Word.setFillTextColor(0, 0, 0);
	Word.setCharacterSize(64);
	
	
	text Winning_Text(Results[0]);
	Winning_Text.setPosition(2000, 2000);
	Winning_Text.setFillTextColor(0, 0, 0);
	Winning_Text.setCharacterSize(64);
	
	

	


	
	

	// создание переменных для вывода слов и подсказок
	// во втором массиве меняется значение перемнной neededline в функции
	int counter = 1;

	


	// создание кнопки Play (::главное меню)
	Button play_b(500, 70, "                  Play");
	play_b.setFillRecktangelColor(202, 189, 233);
	play_b.setFillTextColor(0, 0, 0);
	play_b.setPosition(835, 611);
	play_b.setCharacterSize(48);

	// создание кнопки Rules (::главное меню)
	Button rules_b(500, 70, "                 Rules");
	rules_b.setFillRecktangelColor(202, 189, 233);
	rules_b.setFillTextColor(0, 0, 0);
	rules_b.setPosition(835, 718);
	rules_b.setCharacterSize(48);

	// создание кнопки Back 
	Button back_b(105, 55, "Back");
	back_b.setFillRecktangelColor(149, 165, 58);
	back_b.setFillTextColor(255, 255, 221);
	back_b.setPosition(2000, 2000);
	back_b.setCharacterSize(48);

	// создание кнопки Player vs Player
	Button playermode_b(805, 155, "\n                    Player vs player");
	playermode_b.setFillRecktangelColor(149, 165, 58);
	playermode_b.setFillTextColor(255, 255, 221);
	playermode_b.setPosition(2000, 2000);
	playermode_b.setCharacterSize(48);

	// создание кнопки ready
	Button ready_b(660, 70, "               We are ready!");
	ready_b.setFillRecktangelColor(149, 165, 58);
	ready_b.setFillTextColor(255, 255, 221);
	ready_b.setPosition(2000, 2000);
	ready_b.setCharacterSize(48);

	// создание кнопки guessedOne

	Button guessedOne_b(390, 65, "          guessed!");
	guessedOne_b.setFillRecktangelColor(149, 165, 58);
	guessedOne_b.setFillTextColor(255, 255, 221);
	guessedOne_b.setPosition(2000, 2000);
	guessedOne_b.setCharacterSize(48);

	// создание кнопки guessedTwo

	Button guessedTwo_b(390, 65, "          guessed!");
	guessedTwo_b.setFillRecktangelColor(149, 165, 58);
	guessedTwo_b.setFillTextColor(255, 255, 221);
	guessedTwo_b.setPosition(2000, 2000);
	guessedTwo_b.setCharacterSize(48);

	// создание кнопки skip

	Button skip_b(390, 65, "             skip");
	skip_b.setFillRecktangelColor(149, 165, 58);
	skip_b.setFillTextColor(255, 255, 221);
	skip_b.setPosition(2000, 2000);
	skip_b.setCharacterSize(48);

	// создание кнопки next round
	Button next_b(517, 70, "             next round");
	next_b.setFillRecktangelColor(149, 165, 58);
	next_b.setFillTextColor(255, 255, 221);
	next_b.setPosition(2000, 2000);
	next_b.setCharacterSize(48);



	/*//создание текста для таймера
	text time_text("00:00");
	time_text.setPosition(2000, 2000);
	time_text.setFillTextColor(0, 0, 0);
	time_text.setCharacterSize(60);


	//создание таймера
	Clock timer;
	float duration = 10.0f;
	String timerString;
	float fMilliseconds, fSeconds; //переменные для хранения  значения с плавающей точкой в секундах и милисекундах
	int intMilliseconds, intSeconds;// снова переменные, но уже int
	sf::String stringMilliseconds;// переменная для хранения значения int в милисекундах(!) в строковом формате
	sf::String stringSeconds; //   Эта переменная предназначена для хранения значения секунд int в строковом формате.*/

	


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
		/*//создание таймера (изначальный вывод за пределы экрана)

		Time time = timer.restart();

		if (duration > 0) {// штуки для преобразований таймера из туториала
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
			time_text.setString(timerString);// вывод таймера в текст
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

		// кнопка Play
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

		// кнопка Rules
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
			next_b.setPosition(2000, 2000);
		}


		// кнопка Back
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

			counter = 1;
			playerOne_score = 0;
			playerTwo_score = 0;

			
			back_b.setPosition(2000, 2000);    
			playermode_b.setPosition(2000, 2000);
			guessedOne_b.setPosition(2000, 2000);
			skip_b.setPosition(2000, 2000);
			play_b.setPosition(835, 611);      
			rules_b.setPosition(835, 718);     
			ready_b.setPosition(2000, 2000);
			skip_b.setPosition(2000, 2000);
			next_b.setPosition(2000, 2000);
			Word.setPosition(2000, 2000);
			scoreOne.setPosition(2000, 2000);
			scoreTwo.setPosition(2000, 2000);
			Winning_Text.setPosition(2000, 2000);


			


		}

		// кнопка Player vs player

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

			if (!window_background.loadFromFile("images/player_game_window.png")) return 4;
			background.setTexture(&window_background);

			back_b.setPosition(135, 85);
			ready_b.setPosition(403, 557);

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			
			next_b.setPosition(2000, 2000);

		}

		// кнопка ready

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

			if (!window_background.loadFromFile("images/ForPlayerOne_window.png")) return 4;
			background.setTexture(&window_background);

			Word.setPosition(600, 498);

			guessedOne_b.setPosition(316, 726);
			skip_b.setPosition(769, 726);

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);
			
		}

		// кнопка guessedOne
		// кнопки guessedOne SkipOne для игрока 1
		// конпки guessedTwo SkipTwo для игрока 2
		// пока counter != 10 (первые 10 слов) активна кнопка guessedOne и SkipOne, присвоение очков.
		// если guessedOne нажата playerOne_score++. если playerOne_score == 1, вывод text Score {1}
		
		if (guessedOne_b.pointedMouse(event, mousePositon)) {

			guessedOne_b.setFillRecktangelColor(255, 216, 132);
			guessedOne_b.setFillTextColor(0, 0, 0);

		}
		else
		{
			guessedOne_b.setFillRecktangelColor(149, 165, 58);
			guessedOne_b.setFillTextColor(255, 255, 221);

		}

		if (guessedOne_b.pressed(event, mousePositon)) {

			skip_b.setPosition(769, 726);
			counter++;
			playerOne_score++;
			if (counter == 2)Word.setString(Words[arr[1]]);
			if (counter == 3)Word.setString(Words[arr[2]]);
			if (counter == 4)Word.setString(Words[arr[3]]);
			if (counter == 5)Word.setString(Words[arr[4]]);
			if (counter == 6)Word.setString(Words[arr[5]]);
			if (counter == 7)Word.setString(Words[arr[6]]);
			if (counter == 8)Word.setString(Words[arr[7]]);
			if (counter == 9)Word.setString(Words[arr[8]]);
			if (counter == 10)Word.setString(Words[arr[9]]);
			if (counter == 11)
			{
				if (!window_background.loadFromFile("images/ForPlayerTwo_window.png")) return 4;
				background.setTexture(&window_background);

				Word.setString(Words[arr[10]]);
				guessedTwo_b.setPosition(316, 726);

				guessedOne_b.setPosition(2000, 2000);
				playermode_b.setPosition(2000, 2000);
				rules_b.setPosition(2000, 2000);
				play_b.setPosition(2000, 2000);
				ready_b.setPosition(2000, 2000);
			}
		
			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);
		}

		// кнопка guessedTwo

		if (guessedTwo_b.pointedMouse(event, mousePositon)) {

			guessedTwo_b.setFillRecktangelColor(255, 216, 132);
			guessedTwo_b.setFillTextColor(0, 0, 0);
		}
		else
		{
			guessedTwo_b.setFillRecktangelColor(149, 165, 58);
			guessedTwo_b.setFillTextColor(255, 255, 221);

		}

		if (guessedTwo_b.pressed(event, mousePositon)) {

			skip_b.setPosition(769, 726);
			counter++;
			playerTwo_score++;
			if (counter == 12)Word.setString(Words[arr[11]]);
			if (counter == 13)Word.setString(Words[arr[12]]);
			if (counter == 14)Word.setString(Words[arr[13]]);
			if (counter == 15)Word.setString(Words[arr[14]]);
			if (counter == 16)Word.setString(Words[arr[15]]);
			if (counter == 17)Word.setString(Words[arr[16]]);
			if (counter == 18)Word.setString(Words[arr[17]]);
			if (counter == 19)Word.setString(Words[arr[18]]);
			if (counter == 20)Word.setString(Words[arr[19]]);
			
			if (counter == 21)
			{
				Word.setPosition(2000, 2000);
				if (!window_background.loadFromFile("images/statistics_window.png")) return 4;
				background.setTexture(&window_background);

				guessedOne_b.setPosition(2000, 2000);
				guessedTwo_b.setPosition(2000, 2000);
				skip_b.setPosition(2000, 2000);
				playermode_b.setPosition(2000, 2000);
				rules_b.setPosition(2000, 2000);
				play_b.setPosition(2000, 2000);
				ready_b.setPosition(2000, 2000);

				//вывод очков второго игрока
				scoreTwo.setString(std::to_string(playerTwo_score));
				scoreTwo.setPosition(1190, 607);

				// вывод очков первого игрока
				scoreOne.setString(std::to_string(playerOne_score));
				scoreOne.setPosition(1190, 507);
				//вывод победителя
				if (playerOne_score > playerTwo_score)
				{
					Winning_Text.setPosition(507, 354);
				}
				if (playerOne_score < playerTwo_score)
				{
					Winning_Text.setString(Results[1]);
					Winning_Text.setPosition(507, 354);
				}
				if (playerOne_score == playerTwo_score)
				{
					Winning_Text.setString(Results[2]);
					Winning_Text.setPosition(507, 354);
				}



			}

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);

		}




		// кнопка skip

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
				Word.setString(Words[arr[1]]);
			}
			if (counter == 3)
			{
				Word.setString(Words[arr[2]]);
			}
			if (counter == 4)
			{
				Word.setString(Words[arr[3]]);
			}
			if (counter == 5)
				{
				Word.setString(Words[arr[4]]);
				}
			if (counter == 6)
				{
				Word.setString(Words[arr[5]]);
				}
			if (counter == 7)
				{
				Word.setString(Words[arr[6]]);
				}
			if (counter == 8)
				{
				Word.setString(Words[arr[7]]);
				}
			if (counter == 9)
				{
				Word.setString(Words[arr[8]]);
				}
			if (counter == 10)
				{
				Word.setString(Words[arr[9]]);
				}

			if (counter == 11)
			{
				

				if (!window_background.loadFromFile("images/ForPlayerTwo_window.png")) return 4;
				background.setTexture(&window_background);

				Word.setString(Words[arr[10]]);
				guessedTwo_b.setPosition(316, 726);

				guessedOne_b.setPosition(2000, 2000);
				playermode_b.setPosition(2000, 2000);
				rules_b.setPosition(2000, 2000);
				play_b.setPosition(2000, 2000);
				ready_b.setPosition(2000, 2000);

			}

			if (counter == 12)Word.setString(Words[arr[11]]);
			if (counter == 13)Word.setString(Words[arr[12]]);
			if (counter == 14)Word.setString(Words[arr[13]]);
			if (counter == 15)Word.setString(Words[arr[14]]);
			if (counter == 16)Word.setString(Words[arr[15]]);
			if (counter == 17)Word.setString(Words[arr[16]]);
			if (counter == 18)Word.setString(Words[arr[17]]);
			if (counter == 19)Word.setString(Words[arr[18]]);
			if (counter == 20)Word.setString(Words[arr[19]]);
			if (counter == 21)
			{
				

				if (!window_background.loadFromFile("images/statistics_window.png")) return 4;
				background.setTexture(&window_background);
				Word.setPosition(2000, 2000);
				guessedOne_b.setPosition(2000, 2000);
				guessedTwo_b.setPosition(2000, 2000);
				skip_b.setPosition(2000, 2000);
				playermode_b.setPosition(2000, 2000);
				rules_b.setPosition(2000, 2000);
				play_b.setPosition(2000, 2000);
				ready_b.setPosition(2000, 2000);

				//вывод очков второго игрока
				scoreTwo.setString(std::to_string(playerTwo_score));
				scoreTwo.setPosition(1190, 607);

				// вывод очков первого игрока
				scoreOne.setString(std::to_string(playerOne_score));
				scoreOne.setPosition(1190, 507);
				//вывод победителя
				if (playerOne_score > playerTwo_score)
					{
					Winning_Text.setPosition(507, 354);
					}
				if (playerOne_score < playerTwo_score)
					{
					Winning_Text.setString(Results[1]);
					Winning_Text.setPosition(507, 354);
						
					}
				if (playerOne_score == playerTwo_score)
					{
					Winning_Text.setString(Results[2]);
					Winning_Text.setPosition(507, 354);
					}
			}

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);

		}
		

		// кнопка next_b
		/*if (next_b.pointedMouse(event, mousePositon)){

			next_b.setFillRecktangelColor(255, 216, 132);
			next_b.setFillTextColor(0, 0, 0);

		}
		else
		{
			next_b.setFillRecktangelColor(149, 165, 58);
			next_b.setFillTextColor(255, 255, 221);

		}*/

		/*if (next_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/mode_window.png")) return 4;
			background.setTexture(&window_background);

			counter = 1;
			score = 0;

			


			back_b.setPosition(135, 83);
			playermode_b.setPosition(317, 450);
			guessed_b.setPosition(2000, 2000);
			skip_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);
			guessed_b.setPosition(2000, 2000);
			skip_b.setPosition(2000, 2000);
			score_t.setPosition(2000, 2000);
			next_b.setPosition(2000, 2000);

		}*/

		
		window.clear();
		window.draw(background);

		


		Word.draw(window);

		Winning_Text.draw(window);
		scoreTwo.draw(window);
		scoreOne.draw(window);

		

		

		next_b.draw(window);
		play_b.draw(window);
		rules_b.draw(window);
		back_b.draw(window);
		playermode_b.draw(window);
		ready_b.draw(window);
		guessedOne_b.draw(window);
		guessedTwo_b.draw(window);
		skip_b.draw(window);

		//wordButton.draw(window);
		//time_text.draw(window);
		//word.draw(window);
		window.display();}
		return 0;
	}
