#include "InputWordsAndClues.hpp"

int InputWordsAndClues(std::string* WordsAndCluesArr)
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