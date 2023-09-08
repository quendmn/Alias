#include "InputWordsAndClues.hpp"

int InputWordsAndClues(vector<string> &Words) {
    

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


