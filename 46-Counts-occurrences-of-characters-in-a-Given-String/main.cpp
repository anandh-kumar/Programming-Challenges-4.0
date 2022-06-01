#include <iostream>

int main()
{
    std::string text;
    char chr;
    int count = 0;

    // Get string
    std::cout << "Enter your text: ";
    getline(std::cin, text);

    // Get character
    std::cout << "Enter the character: ";
    std::cin >> chr;

    // Counts
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == chr)
        {
            count++;
        }
    }

    // Display result
    std::cout << "Character " << chr << " occurs " << count << " times in " << text;

    return 0;
}