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
		int line = 325; // конечное кол-во строчек
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
int InputWordsAndCluesV2(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary2.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (329 - 0 + 1) + 0;
    int counter = -1;
    std::string currentLine;

    int result = 0;

    for (int i = 0; i < WordsAndCluesArr->size(); i++)
    {
        if (WordsAndCluesArr[i] != "")
        {
            WordsAndCluesArr[i] = "";
        }
    }

    while (std::getline(File, currentLine) && ++counter != neededLine);

    if (counter < neededLine) {

        return 4;

    }
    else
    {
        if (counter == neededLine)
        {
            int i = 0;
            for (char splitString : currentLine)
            {
                if (splitString == *(",")) {
                    continue;
                }
                WordsAndCluesArr[i].push_back(splitString);
            }
        }
    }

    File.close();

    return 0;
}

int InputWordsAndCluesV3(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (20 - 0 + 1) + 0;
    int counter = -1;
    std::string currentLine;

    int result = 0;

    for (int i = 0; i < WordsAndCluesArr->size(); i++)
    {
        if (WordsAndCluesArr[i] != "")
        {
            WordsAndCluesArr[i] = "";
        }
    }

    while (std::getline(File, currentLine) && ++counter != neededLine);

    if (counter < neededLine) {

        return 4;

    }
    else
    {
        if (counter == neededLine)
        {
            int i = 0;
            for (char splitString : currentLine)
            {
                WordsAndCluesArr[i].push_back(splitString);
            }
        }
    }

    File.close();

    return 0;
}