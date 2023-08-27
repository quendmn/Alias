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

int InputWordsAndClues_eleven(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 11 + 1) + 11;
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

int InputWordsAndClues_twelwe(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 12 + 1) + 12;
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

int InputWordsAndClues_thirteen(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 13 + 1) + 13;
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

int InputWordsAndClues_fourteen(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 14 + 1) + 14;
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

int InputWordsAndClues_fifteen(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 15 + 1) + 15;
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

int InputWordsAndClues_sixteen(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 16 + 1) + 16;
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

int InputWordsAndClues_seventeen(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 17 + 1) + 17;
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

int InputWordsAndClues_eighteen(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 18 + 1) + 18;
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

int InputWordsAndClues_nineteen(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 19 + 1) + 19;
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

int InputWordsAndClues_twenty(std::string* WordsAndCluesArr)
{
    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);

    if (!File.is_open()) {

        return 4;

    }
    srand(time(NULL));
    int neededLine = rand() % (323 - 20 + 1) + 20;
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

