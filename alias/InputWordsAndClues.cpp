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
		int line = 325; // �������� ���-�� �������
		std::string currentLine;
		int counter = 0;

		for (int i = 0; i < arr->size(); i++)//������� ������ ������-��� push_back() ���� ��������� �������, �� �� ��������
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
				for (char splitString : currentLine)//��� ��� string ��� ������ char-�� �� ���������� �� ����
				{
					if (splitString == *(",")) {	//���� splitString ����� ������� �� ������ ������ ��� ���������� ������ ������ ������� �����������
						i++;
						continue; //continue ��� ���� ���� � �����/��������� �� ������������ �������
					}
					arr[i].push_back(splitString);//���������� �� �������� ��� ��� ���������� char-�� � �� ����� �������
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