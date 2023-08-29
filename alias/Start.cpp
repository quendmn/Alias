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
	
	string one_s = "1";
	string two_s = "2";
	string three_s = "3";
	string four_s = "4";
	string five_s = "5";
	string six_s = "6";
	string seven_s = "7";
	string eight_s = "8";
	string nine_s = "9";
	string ten_s = "10";
	
	string PlayerOneWon = "  Player #1 won!";
	string PlayerTwoWon = "Player #2 won!";
	string FriendshipWon = "Friendship won! :)";
	
	// создание массива случайных чисел
	
	
	
	// содание вектора для слов
	
	string Word_one = Words[arr[0]];
	string Word_two = Words[arr[1]];
	string Word_three = Words[arr[2]];
	string Word_four = Words[arr[3]];
	string Word_five = Words[arr[4]];
	string Word_six = Words[arr[5]];
	
	
	text Word(Word_one);
	Word.setPosition(2000, 2000);
	Word.setFillTextColor(0, 0, 0);
	Word.setCharacterSize(64);
	
	
	text PlayerOneWonText(PlayerOneWon);
	PlayerOneWonText.setPosition(2000, 2000);
	PlayerOneWonText.setFillTextColor(0, 0, 0);
	PlayerOneWonText.setCharacterSize(64);
	
	text PlayerTwoWonText(PlayerTwoWon);
	PlayerTwoWonText.setPosition(2000, 2000);
	PlayerTwoWonText.setFillTextColor(0, 0, 0);
	PlayerTwoWonText.setCharacterSize(64);
	
	text FriendshipWonText(FriendshipWon);
	FriendshipWonText.setPosition(2000, 2000);
	FriendshipWonText.setFillTextColor(0, 0, 0);
	FriendshipWonText.setCharacterSize(64);
		
	text one(one_s);
	one.setPosition(2000, 2000);
	one.setFillTextColor(0, 0, 0);
	one.setCharacterSize(100);
	
	text two(two_s);
	one.setPosition(2000, 2000);
	one.setFillTextColor(0, 0, 0);
	one.setCharacterSize(100);
	
	text three(three_s);
	one.setPosition(2000, 2000);
	one.setFillTextColor(0, 0, 0);
	one.setCharacterSize(100);
	
	text four(four_s);
	one.setPosition(2000, 2000);
	one.setFillTextColor(0, 0, 0);
	one.setCharacterSize(100);
	
	text five(five_s);
	one.setPosition(2000, 2000);
	one.setFillTextColor(0, 0, 0);
	one.setCharacterSize(100);
	
	text six(six_s);
	one.setPosition(2000, 2000);
	one.setFillTextColor(0, 0, 0);
	one.setCharacterSize(100);
	
	text seven(seven_s);
	one.setPosition(2000, 2000);
	one.setFillTextColor(0, 0, 0);
	one.setCharacterSize(100);
	
	text eight(eight_s);
	one.setPosition(2000, 2000);
	one.setFillTextColor(0, 0, 0);
	one.setCharacterSize(80);
	
	text nine(nine_s);
	one.setPosition(2000, 2000);
	one.setFillTextColor(0, 0, 0);
	one.setCharacterSize(100);
	
	text ten(ten_s);
	one.setPosition(2000, 2000);
	one.setFillTextColor(0, 0, 0);
	one.setCharacterSize(100);
	

	// создание переменных для вывода слов и подсказок
	// во втором массиве меняется значение перемнной neededline в функции
	int counter = 1;

	//первый массив 
	//string* WordsAndCluesArr_one = new string;
	//InputWordsAndClues_one(WordsAndCluesArr_one);
	//string wordString_one = WordsAndCluesArr_one[0];

	//text word_one(wordString_one);
	//word_one.setPosition(2000, 2000);
	//word_one.setFillTextColor(0, 0, 0);
	//word_one.setCharacterSize(85);


	//второй массив 
	//string* WordsAndCluesArr_two = new string;
	//InputWordsAndClues_two(WordsAndCluesArr_two);
	//string wordString_two = WordsAndCluesArr_two[0];

	//text word_two(wordString_two);
	//word_two.setPosition(2000, 2000);
	//word_two.setFillTextColor(0, 0, 0);
	//word_two.setCharacterSize(85);

	//третий массив 
	
	//string* WordsAndCluesArr_three = new string;
	//InputWordsAndClues_three(WordsAndCluesArr_three);
	//string wordString_three = WordsAndCluesArr_three[0];
	//
	//text word_three(wordString_three);
	//word_three.setPosition(2000, 2000);
	//word_three.setFillTextColor(0, 0, 0);
	//word_three.setCharacterSize(85);
	// 
	//четвертый массив 
	//string* WordsAndCluesArr_four = new string;
	//InputWordsAndClues_four(WordsAndCluesArr_four);
	//string wordString_four = WordsAndCluesArr_four[0];

	//text word_four(wordString_four);
	//word_four.setPosition(2000, 2000);
	//word_four.setFillTextColor(0, 0, 0);
	//word_four.setCharacterSize(85);

	//пятый массив 
	
	//string* WordsAndCluesArr_five = new string;
	//InputWordsAndClues_five(WordsAndCluesArr_five);
	//string wordString_five = WordsAndCluesArr_five[0];

	//text word_five(wordString_five);
	//word_five.setPosition(2000, 2000);
	//word_five.setFillTextColor(0, 0, 0);
	//word_five.setCharacterSize(85);

	//шестой массив
	//string* WordsAndCluesArr_six = new string;
	//InputWordsAndClues_six(WordsAndCluesArr_six);
	//string wordString_six = WordsAndCluesArr_six[0];

	//text word_six(wordString_six);
	//word_six.setPosition(2000, 2000);
	//word_six.setFillTextColor(0, 0, 0);
	//word_six.setCharacterSize(85);

	//седьмой массив
	//string* WordsAndCluesArr_seven = new string;
	//InputWordsAndClues_seven(WordsAndCluesArr_seven);
	//string wordString_seven = WordsAndCluesArr_seven[0];

	//text word_seven(wordString_seven);
	//word_seven.setPosition(2000, 2000);
	//word_seven.setFillTextColor(0, 0, 0);
	//word_seven.setCharacterSize(85);

	////восьмой массив
	//string* WordsAndCluesArr_eight = new string;
	//InputWordsAndClues_eight(WordsAndCluesArr_eight);
	//string wordString_eight = WordsAndCluesArr_eight[0];

	//text word_eight(wordString_eight);
	//word_eight.setPosition(2000, 2000);
	//word_eight.setFillTextColor(0, 0, 0);
	//word_eight.setCharacterSize(85);

	////девятый массив
	//string* WordsAndCluesArr_nine = new string;
	//InputWordsAndClues_nine(WordsAndCluesArr_nine);
	//string wordString_nine = WordsAndCluesArr_nine[0];

	//text word_nine(wordString_nine);
	//word_nine.setPosition(2000, 2000);
	//word_nine.setFillTextColor(0, 0, 0);
	//word_nine.setCharacterSize(85);

	////десятый массив
	//string* WordsAndCluesArr_ten = new string;
	//InputWordsAndClues_ten(WordsAndCluesArr_ten);
	//string wordString_ten = WordsAndCluesArr_ten[0];

	//text word_ten(wordString_ten);
	//word_ten.setPosition(2000, 2000);
	//word_ten.setFillTextColor(0, 0, 0);
	//word_ten.setCharacterSize(85);

	//// 11 массив

	//string* WordsAndCluesArr_eleven = new string;
	//InputWordsAndClues_eleven(WordsAndCluesArr_eleven);
	//string wordString_eleven = WordsAndCluesArr_eleven[0];

	//text word_eleven(wordString_eleven);
	//word_eleven.setPosition(2000, 2000);
	//word_eleven.setFillTextColor(0, 0, 0);
	//word_eleven.setCharacterSize(85);

	//// 12 массив

	//string* WordsAndCluesArr_twelwe = new string;
	//InputWordsAndClues_twelwe(WordsAndCluesArr_twelwe);
	//string wordString_twelwe = WordsAndCluesArr_twelwe[0];

	//text word_twelwe(wordString_twelwe);
	//word_twelwe.setPosition(2000, 2000);
	//word_twelwe.setFillTextColor(0, 0, 0);
	//word_twelwe.setCharacterSize(85);

	//// 13 массив

	//string* WordsAndCluesArr_thirteen = new string;
	//InputWordsAndClues_thirteen(WordsAndCluesArr_thirteen);
	//string wordString_thirteen = WordsAndCluesArr_thirteen[0];

	//text word_thirteen(wordString_thirteen);
	//word_thirteen.setPosition(2000, 2000);
	//word_thirteen.setFillTextColor(0, 0, 0);
	//word_thirteen.setCharacterSize(85);

	//// 14 массив

	//string* WordsAndCluesArr_fourteen = new string;
	//InputWordsAndClues_fourteen(WordsAndCluesArr_fourteen);
	//string wordString_fourteen = WordsAndCluesArr_fourteen[0];

	//text word_fourteen(wordString_fourteen);
	//word_fourteen.setPosition(2000, 2000);
	//word_fourteen.setFillTextColor(0, 0, 0);
	//word_fourteen.setCharacterSize(85);

	//// 15 массив

	//string* WordsAndCluesArr_fifteen = new string;
	//InputWordsAndClues_fifteen(WordsAndCluesArr_fifteen);
	//string wordString_fifteen = WordsAndCluesArr_fifteen[0];

	//text word_fifteen(wordString_fifteen);
	//word_fifteen.setPosition(2000, 2000);
	//word_fifteen.setFillTextColor(0, 0, 0);
	//word_fifteen.setCharacterSize(85);

	//// 16 массив

	//string* WordsAndCluesArr_sixteen = new string;
	//InputWordsAndClues_sixteen(WordsAndCluesArr_sixteen);
	//string wordString_sixteen = WordsAndCluesArr_sixteen[0];

	//text word_sixteen(wordString_sixteen);
	//word_sixteen.setPosition(2000, 2000);
	//word_sixteen.setFillTextColor(0, 0, 0);
	//word_sixteen.setCharacterSize(85);

	//// 17 массив

	//string* WordsAndCluesArr_seventeen = new string;
	//InputWordsAndClues_seventeen(WordsAndCluesArr_seventeen);
	//string wordString_seventeen = WordsAndCluesArr_seventeen[0];

	//text word_seventeen(wordString_seventeen);
	//word_seventeen.setPosition(2000, 2000);
	//word_seventeen.setFillTextColor(0, 0, 0);
	//word_seventeen.setCharacterSize(85);

	//// 18 массив

	//string* WordsAndCluesArr_eighteen = new string;
	//InputWordsAndClues_eighteen(WordsAndCluesArr_eighteen);
	//string wordString_eighteen = WordsAndCluesArr_eighteen[0];

	//text word_eighteen(wordString_eighteen);
	//word_eighteen.setPosition(2000, 2000);
	//word_eighteen.setFillTextColor(0, 0, 0);
	//word_eighteen.setCharacterSize(85);

	//// 19 массив

	//string* WordsAndCluesArr_nineteen = new string;
	//InputWordsAndClues_nineteen(WordsAndCluesArr_nineteen);
	//string wordString_nineteen = WordsAndCluesArr_nineteen[0];

	//text word_nineteen(wordString_nineteen);
	//word_nineteen.setPosition(2000, 2000);
	//word_nineteen.setFillTextColor(0, 0, 0);
	//word_nineteen.setCharacterSize(85);

	//// 20 массив

	//string* WordsAndCluesArr_twenty = new string;
	//InputWordsAndClues_twenty(WordsAndCluesArr_twenty);
	//string wordString_twenty = WordsAndCluesArr_twenty[0];

	//text word_twenty(wordString_twenty);
	//word_twenty.setPosition(2000, 2000);
	//word_twenty.setFillTextColor(0, 0, 0);
	//word_twenty.setCharacterSize(85);


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

			/*word_one.setPosition(2000,2000);
			word_two.setPosition(2000, 2000);
			word_three.setPosition(2000, 2000);
			word_four.setPosition(2000, 2000);
			word_five.setPosition(2000, 2000);
			word_six.setPosition(2000, 2000);
			word_seven.setPosition(2000, 2000);
			word_eight.setPosition(2000, 2000);
			word_nine.setPosition(2000, 2000);
			word_ten.setPosition(2000, 2000);*/
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
			/*word_one.setPosition(2000, 2000);
			word_two.setPosition(2000, 2000);
			word_three.setPosition(2000, 2000);
			word_four.setPosition(2000, 2000);
			word_five.setPosition(2000, 2000);
			word_six.setPosition(2000, 2000);
			word_seven.setPosition(2000, 2000);
			word_eight.setPosition(2000, 2000);
			word_nine.setPosition(2000, 2000);
			word_ten.setPosition(2000, 2000);*/
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

			Word.setPosition(525, 498);

			guessedOne_b.setPosition(316, 726);
			skip_b.setPosition(769, 726);

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);
			/*word_two.setPosition(2000, 2000);
			word_three.setPosition(2000, 2000);
			word_four.setPosition(2000, 2000);
			word_five.setPosition(2000, 2000);
			word_six.setPosition(2000, 2000);
			word_seven.setPosition(2000, 2000);
			word_eight.setPosition(2000, 2000);
			word_nine.setPosition(2000, 2000);
			word_ten.setPosition(2000, 2000);*/
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
			if (counter == 2) 
			{
				Word.setString(Word_two);
				


				/*word_one.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_two.setPosition(545, 498);*/

			}
			if (counter == 3)
			{
				Word.setString(Word_three);
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);*/

				//word_three.setPosition(545, 498);
			}
			if (counter == 4)
			{
				Word.setString(Word_four);
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_four.setPosition(545, 498);*/
			}
			if (counter == 5)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_five.setPosition(545, 498);*/
			}
			if (counter == 6)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_six.setPosition(545, 498);*/
			}
			if (counter == 7)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_seven.setPosition(545, 498);*/
			}
			if (counter == 8)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_eight.setPosition(545, 498);*/
			}
			if (counter == 9)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_nine.setPosition(545, 498);
			}*/
			if (counter == 10)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_ten.setPosition(545, 498);*/
			}
			if (counter == 11)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);*/

				if (!window_background.loadFromFile("images/ForPlayerTwo_window.png")) return 4;
				background.setTexture(&window_background);

				//word_eleven.setPosition(545, 498);
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
			if (counter == 12)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_twelwe.setPosition(545, 498);*/

			}
			if (counter == 13)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(545, 498);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_thirteen.setPosition(545, 498);*/
			}
			if (counter == 14)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_fourteen.setPosition(545, 498);*/
	
			}
			if (counter == 15)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_fifteen.setPosition(545, 498);*/
			}
			if (counter == 16)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_sixteen.setPosition(545, 498);*/
			}
			if (counter == 17)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_seventeen.setPosition(545, 498);*/
			}
			if (counter == 18)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_eighteen.setPosition(545, 498);*/
			}
			if (counter == 19)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_nineteen.setPosition(545, 498);*/
			}
			if (counter == 20)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);

				word_twenty.setPosition(545, 498);*/
				
			}
			if (counter == 21)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_four.setPosition(2000, 2000);
				word_five.setPosition(2000, 2000);
				word_six.setPosition(2000, 2000);
				word_seven.setPosition(2000, 2000);
				word_eight.setPosition(2000, 2000);
				word_nine.setPosition(2000, 2000);
				word_ten.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);*/

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
				if(playerTwo_score == 1)
				{
					one.setPosition(1190, 607);
				}
				if (playerTwo_score == 2)
				{
					two.setPosition(1190, 607);
				}
				if (playerTwo_score == 3)
				{
					three.setPosition(1190, 607);
				}
				if (playerTwo_score == 4)
				{
					four.setPosition(1190, 607);
				}
				if (playerTwo_score == 5)
				{
					five.setPosition(1190, 607);
				}
				if (playerTwo_score == 6)
				{
					six.setPosition(1190, 607);
				}
				if (playerTwo_score == 7)
				{
					seven.setPosition(1190, 607);
				}
				if (playerTwo_score == 8)
				{
					eight.setPosition(1190, 607);
				}
				if (playerTwo_score == 9)
				{
					nine.setPosition(1190, 607);
				}
				if (playerTwo_score == 10)
				{
					ten.setPosition(1190, 607);
				}

				// вывод очков первого игрока
				if (playerOne_score == 1)
				{
					one.setPosition(1190, 507);
				}
				if (playerOne_score == 2)
				{
					two.setPosition(1190, 507);
				}
				if (playerOne_score == 3)
				{
					three.setPosition(1190, 507);
				}
				if (playerOne_score == 4)
				{
					four.setPosition(1190, 507);
				}
				if (playerOne_score == 5)
				{
					five.setPosition(1190, 507);
				}
				if (playerOne_score == 6)
				{
					six.setPosition(1190, 507);
				}
				if (playerOne_score == 7)
				{
					seven.setPosition(1190, 507);
				}
				if (playerOne_score == 8)
				{
					eight.setPosition(1190, 507);
				}
				if (playerOne_score == 9)
				{
					nine.setPosition(1190, 507);
				}
				if (playerOne_score == 10)
				{
					ten.setPosition(1190, 507);
				}
				//вывод победителя
				if (playerOne_score > playerTwo_score)
				{
					PlayerOneWonText.setPosition(507, 354);
				}
				if (playerOne_score < playerTwo_score)
				{
					PlayerTwoWonText.setPosition(507, 354);
				}
				if (playerOne_score == playerTwo_score)
				{
					FriendshipWonText.setPosition(507, 354);
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
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(545, 498);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);*/
			}
			if (counter == 3)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_three.setPosition(545, 498);*/
			}
			if (counter == 4)
			{
				/*word_one.setPosition(2000, 2000);
				word_two.setPosition(2000, 2000);
				word_three.setPosition(2000, 2000);
				word_eleven.setPosition(2000, 2000);
				word_twelwe.setPosition(2000, 2000);
				word_thirteen.setPosition(2000, 2000);
				word_fourteen.setPosition(2000, 2000);
				word_fifteen.setPosition(2000, 2000);
				word_sixteen.setPosition(2000, 2000);
				word_seventeen.setPosition(2000, 2000);
				word_eighteen.setPosition(2000, 2000);
				word_nineteen.setPosition(2000, 2000);
				word_twenty.setPosition(2000, 2000);

				word_four.setPosition(545, 498);*/
			}
			if (counter == 5)
				{
					/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_five.setPosition(545, 498);*/
				}
			if (counter == 6)
				{
					/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_six.setPosition(545, 498);*/
				}
			if (counter == 7)
				{
					/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_seven.setPosition(545, 498);*/
				}
			if (counter == 8)
				{
					/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_eight.setPosition(545, 498);*/
				}
			if (counter == 9)
				{
					/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_nine.setPosition(545, 498);*/
				}
			if (counter == 10)
				{
					/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_ten.setPosition(545, 498);*/

				}

			if (counter == 11)
			{
				/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_ten.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);*/

				if (!window_background.loadFromFile("images/ForPlayerTwo_window.png")) return 4;
				background.setTexture(&window_background);

				//word_eleven.setPosition(545, 498);
				guessedTwo_b.setPosition(316, 726);

				guessedOne_b.setPosition(2000, 2000);
				playermode_b.setPosition(2000, 2000);
				rules_b.setPosition(2000, 2000);
				play_b.setPosition(2000, 2000);
				ready_b.setPosition(2000, 2000);

			}

			if (counter == 12)
			{
				/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_ten.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_twelwe.setPosition(545, 498);*/

			}
			if (counter == 13)
			{
				/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_ten.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(545, 498);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_thirteen.setPosition(545, 498);*/
			}
			if (counter == 14)
			{
				/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_ten.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_fourteen.setPosition(545, 498);*/

			}
			if (counter == 15)
			{
				/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_ten.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_fifteen.setPosition(545, 498);*/
			}
			if (counter == 16)
			{
				/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_ten.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_sixteen.setPosition(545, 498);*/
			}
			if (counter == 17)
				{
					/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_ten.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_seventeen.setPosition(545, 498);*/
				}
			if (counter == 18)
				{
					/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_ten.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_eighteen.setPosition(545, 498);*/
				}
			if (counter == 19)
			{
				/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_ten.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);

					word_nineteen.setPosition(545, 498);*/
			}
			if (counter == 20)
				{
					/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_ten.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);

					word_twenty.setPosition(545, 498);*/

				}
			if (counter == 21)
			{
				/*word_one.setPosition(2000, 2000);
					word_two.setPosition(2000, 2000);
					word_three.setPosition(2000, 2000);
					word_four.setPosition(2000, 2000);
					word_five.setPosition(2000, 2000);
					word_six.setPosition(2000, 2000);
					word_seven.setPosition(2000, 2000);
					word_eight.setPosition(2000, 2000);
					word_nine.setPosition(2000, 2000);
					word_ten.setPosition(2000, 2000);
					word_eleven.setPosition(2000, 2000);
					word_twelwe.setPosition(2000, 2000);
					word_thirteen.setPosition(2000, 2000);
					word_fourteen.setPosition(2000, 2000);
					word_fifteen.setPosition(2000, 2000);
					word_sixteen.setPosition(2000, 2000);
					word_seventeen.setPosition(2000, 2000);
					word_eighteen.setPosition(2000, 2000);
					word_nineteen.setPosition(2000, 2000);
					word_twenty.setPosition(2000, 2000);*/

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
				if (playerTwo_score == 1)
				{
					one.setPosition(1190, 607);
				}
				if (playerTwo_score == 2)
				{
					two.setPosition(1190, 607);
				}
				if (playerTwo_score == 3)
				{
					three.setPosition(1190, 607);
				}
				if (playerTwo_score == 4)
				{
					four.setPosition(1190, 607);
				}
				if (playerTwo_score == 5)
					{
						five.setPosition(1190, 607);
					}
				if (playerTwo_score == 6)
					{
						six.setPosition(1190, 607);
					}
				if (playerTwo_score == 7)
					{
						seven.setPosition(1190, 607);
					}
				if (playerTwo_score == 8)
					{
						eight.setPosition(1190, 607);
					}
				if (playerTwo_score == 9)
					{
						nine.setPosition(1190, 607);
					}
				if (playerTwo_score == 10)
					{
						ten.setPosition(1190, 607);
					}

				// вывод очков первого игрока
				if (playerOne_score == 1)
					{
						one.setPosition(1190, 507);
					}
				if (playerOne_score == 2)
					{
						two.setPosition(1190, 507);
					}
				if (playerOne_score == 3)
					{
						three.setPosition(1190, 507);
					}
				if (playerOne_score == 4)
					{
						four.setPosition(1190, 507);
					}
				if (playerOne_score == 5)
					{
						five.setPosition(1190, 507);
					}
				if (playerOne_score == 6)
					{
						six.setPosition(1190, 507);
					}
				if (playerOne_score == 7)
					{
						seven.setPosition(1190, 507);
					}
				if (playerOne_score == 8)
					{
						eight.setPosition(1190, 507);
					}
				if (playerOne_score == 9)
					{
						nine.setPosition(1190, 507);
					}
				if (playerOne_score == 10)
					{
						ten.setPosition(1190, 507);
					}
				//вывод победителя
				if (playerOne_score > playerTwo_score)
					{
						PlayerOneWonText.setPosition(507, 354);
					}
				if (playerOne_score < playerTwo_score)
					{
						PlayerTwoWonText.setPosition(507, 354);
					}
				if (playerOne_score == playerTwo_score)
					{
						FriendshipWonText.setPosition(507, 354);
					}
			}

			playermode_b.setPosition(2000, 2000);
			rules_b.setPosition(2000, 2000);
			play_b.setPosition(2000, 2000);
			ready_b.setPosition(2000, 2000);

			}
		}

		// кнопка next_b
		if (next_b.pointedMouse(event, mousePositon)) {

			next_b.setFillRecktangelColor(255, 216, 132);
			next_b.setFillTextColor(0, 0, 0);

		}
		else
		{
			next_b.setFillRecktangelColor(149, 165, 58);
			next_b.setFillTextColor(255, 255, 221);

		}

		/*if (next_b.pressed(event, mousePositon)) {

			if (!window_background.loadFromFile("images/mode_window.png")) return 4;
			background.setTexture(&window_background);

			counter = 1;
			score = 0;

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
			word_eleven.setPosition(2000, 2000);
			word_twelwe.setPosition(2000, 2000);
			word_thirteen.setPosition(2000, 2000);
			word_fourteen.setPosition(2000, 2000);
			word_fifteen.setPosition(2000, 2000);
			word_sixteen.setPosition(2000, 2000);
			word_seventeen.setPosition(2000, 2000);
			word_eighteen.setPosition(2000, 2000);
			word_nineteen.setPosition(2000, 2000);
			word_twenty.setPosition(2000, 2000);


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

		one.draw(window);
		two.draw(window);
		three.draw(window);
		four.draw(window);
		five.draw(window);
		six.draw(window);
		seven.draw(window);
		eight.draw(window);
		nine.draw(window);
		ten.draw(window);


		Word.draw(window);

		PlayerOneWonText.draw(window);
		PlayerTwoWonText.draw(window);
		FriendshipWonText.draw(window);

		/*word_one.draw(window);
		word_two.draw(window);
		word_three.draw(window);
		word_four.draw(window);
		word_five.draw(window);
		word_six.draw(window);
		word_seven.draw(window);
		word_eight.draw(window);
		word_nine.draw(window);
		word_ten.draw(window);
		word_eleven.draw(window);
		word_twelwe.draw(window);
		word_thirteen.draw(window);
		word_fourteen.draw(window);
		word_fifteen.draw(window);
		word_sixteen.draw(window);
		word_seventeen.draw(window);
		word_eighteen.draw(window);
		word_nineteen.draw(window);
		word_twenty.draw(window);*/


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
		window.display();
	}
	
	return 0;

}