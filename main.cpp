#include <iostream>

std::string encrypt_cezar(std::string text, int number)
{
    for(int i = 0;i<text.length();i++)
    {
        char z;
        z = text[i] + number;
        std::cout << z;
    }
    return text;
}
int main() {
    std::string text;
    std::cin >> text;
    int number;
    std::cin >> number;
    std::cout << encrypt_cezar(text, number) << std::endl;
}
