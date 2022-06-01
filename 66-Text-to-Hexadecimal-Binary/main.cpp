#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{
    std::string text;
    std::string hex;
    std::string bin;

    // Get input
    std::cout << "Enter text: ";
    getline(std::cin, text);

    // Conversion part
    for(int pos = 0; pos < text.length(); pos++)
    {    
        // To bin
        bin = bin + std::bitset<8>((int) text[pos]).to_string() + " ";

        // To hex
        std::stringstream ss;
        ss << std::hex << (int) text[pos];
        hex = hex + ss.str() + " ";
    }

    // Display results
    std::cout << "Hex: " << hex << std::endl;
    std::cout << "Bin: " << bin << std::endl;
        
}