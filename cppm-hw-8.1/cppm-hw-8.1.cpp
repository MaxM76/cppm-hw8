#include <iostream>
#include <Windows.h>

class BadLengthException : public std::exception
{
public:
    const char* what() const override { return "Вы ввели слово запретной длины! До свидания"; }
};

int StringLengthControl(std::string str, int forbidden_length) {
    int result = 0;
    result = str.length();
    if (result == forbidden_length) {
        throw BadLengthException();
    }
    return result;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string inputString;
    int forbiddenLength = 0;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbiddenLength;
    while (true) {
        std::cout << "Введите слово: ";
        std::cin >> inputString;
        try {
            std::cout << "Длина слова \"" << inputString << "\" равна "
                << StringLengthControl(inputString, forbiddenLength) << "\n";
        }
        catch (const BadLengthException& ex) {
            std::cout << ex.what() << std::endl;
            break;
        }
        catch (...) {
            std::cout << "Неизвестная ошибка" << std::endl;
            break;
        }
    }
}