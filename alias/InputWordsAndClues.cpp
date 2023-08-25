#include "InputWordsAndClues.hpp"

int InputWordsAndClues_one(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }

    srand(time(NULL));
    int neededLine = rand() % (323 - 0 + 1) + 0;
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

int InputWordsAndClues_two(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 2 + 1) + 2;
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

int InputWordsAndClues_three(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 3 + 1) + 3;
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

int InputWordsAndClues_four(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 4 + 1) + 4;
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

int InputWordsAndClues_five(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 5 + 1) + 5;
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

int InputWordsAndClues_six(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 6 + 1) + 6;
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

int InputWordsAndClues_seven(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 7 + 1) + 7;
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


int InputWordsAndClues_eight(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 8 + 1) + 8;
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

int InputWordsAndClues_nine(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 9 + 1) + 9;
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

int InputWordsAndClues_ten(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 10 + 1) + 10;
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