#include <iostream>

std::string encrypt(std::string text, int shift = 0)
{
    std::string encrypted;

    // if shift is 0, program display ciphertext for all possible shifts
    if (shift == 0)
    {
        std::cout << "Plaintext: " << text << std::endl;
        for (int i = 1; i <= 25; i++)
        {
            std::cout << "Shift: " << i << std::endl;
            std::cout << "Ciphertext: " << encrypt(text, i) << std::endl
                      << std::endl;
        }
    }

    // Encryption part
    for (int pos = 0; pos < text.length() && shift != 0; pos++)
    {
        if ((int)text[pos] >= 65 && (int)text[pos] <= 90)
        {
            encrypted = encrypted + (char)((((int)text[pos] - 65) + shift) % 26 + 65);
        }
        else if ((int)text[pos] >= 97 && (int)text[pos] <= 122)
        {
            encrypted = encrypted + (char)((((int)text[pos] - 97) + shift) % 26 + 97);
        }
        else
        {
            encrypted = encrypted + text[pos];
        }
    }

    return encrypted;
}

int main()
{
    // Tip
    std::cout << "Use shift 0 to bruteforce.\n";

    std::string text;
    int shift;
    std::cout << "Enter text: ";
    getline(std::cin, text);

    std::cout << "Enter shift: ";
    std::cin >> shift;

    // Ask  for encryption or decryption
    char option;
    std::cout << "Encrypt or Decrypt? [E,d]: ";
    std::cin >> option;

    std::cout << "Plaintext: " << text << std::endl;

    // Decryption
    if (option == 'd' && shift != 0)
    {

        std::cout << "🠞 " << shift << "(🠜 " << 26 - shift << ") " << encrypt(text, shift) << std::endl;
        std::cout << "🠜 " << shift << "(🠞 " << 26 - shift << ") " << encrypt(text, 0 - shift) << std::endl;
    }
    // Encryption
    else
    {
        std::cout << "Shift: " << shift << std::endl;
        std::cout << "Ciphertext: " << encrypt(text, shift) << std::endl;
    }
}