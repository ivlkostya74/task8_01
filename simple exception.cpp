//
#include <iostream>
#include <exception>
int function(std::string str, int forbidden_length) {
    if (forbidden_length == str.length())
    {
        throw std::exception("Вы ввели слово запретной длины!");
    };

    return static_cast<int>(str.length());

}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    int forbidden_length;
    std::string anyWord;
    std::cout << "Ведите запретную длину :\n";
    std::cin >> forbidden_length;
    try
    {

        do {
            std::cout << "Ведите слово :\n";
            std::cin >> anyWord;
            std::cout << "Длина слова \"" << anyWord << "\" равна " 
                << function(anyWord, forbidden_length)<<std::endl;
        } while (forbidden_length != function(anyWord, forbidden_length));
    }
    catch (const std::exception&error)
    {
        std::cout << std::endl << error.what() << std::endl;
    }
}
    
