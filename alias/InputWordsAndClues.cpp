#include "InputWordsAndClues.hpp"

int InputWordsAndClues(std::string* arr)
{
	const std::string fileName = "dictionary2.txt";
	std::ifstream wordsRand(fileName);

	if (!wordsRand.is_open())
	{
		return 4;
	}
	else {
		int line = 328; // конечное кол-во строчек
		std::string currentLine;
		int counter = 0;

		for (int i = 0; i < arr->size(); i++)//очищаем массив потому-что push_back() лишь добавляет элемент, но не заменяет
		{
			if (arr[i] != "")
			{
				arr[i] = "";
			}
		}

		while (std::getline(wordsRand, currentLine) && ++counter <= line) {
			if (counter == line)
			{
				int i = 0;
				for (char splitString : currentLine)//так как string это массив char-ов мы проходимся по нему
				{
					if (splitString == *(",")) {	//если splitString равна запятой мы меняем индекс для заполнения другой ячейки другими подсказками
						i++;
						continue; //continue для того чтоб в слова/подсказки не записывалась запятая
					}
					arr[i].push_back(splitString);//записываем по смвольно так как проходимся char-ом а не целой строкой
				}

			}
		}
	}

	wordsRand.close();
	return 0;
}
