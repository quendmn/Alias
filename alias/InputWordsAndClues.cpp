#include "InputWordsAndClues.hpp"

/*int InputWordsAndClues_one(std::string* WordsAndCluesArr)
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
}*/



int InputWordsAndClues_1000(vector<string> &Words) {
    

    const std::string fileName = "dictionary.txt";
    std::ifstream File(fileName);
    std::string str;

    //int random;

    while (!File.eof())
    {
        getline(File, str);
        Words.push_back(str);
    }
    
    
    return 0;

}
int Random_generate(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        srand(time(NULL));
        arr[i] = rand() % (323 - (15 + i) + 1) + (15 + i);
    }
    return 0;
}

/*int Image_Icon(Image icon, RenderWindow& window) {
    if (!icon.loadFromFile("images/icon.png"))
    {
        return 1;
    }
    window.setIcon(32, 32, icon.getPixelsPtr());
}*/


