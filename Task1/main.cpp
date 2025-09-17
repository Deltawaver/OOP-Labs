#include <iostream>
#include "checker.h"


int main(){
    std::string text;

    std::cout << "Выберите систему исчисления числа. Введите номер варианта без доп. символов: \n 1) 2 \n 2) 8 \n 3) 10 \n 4) 16" << std::endl;
    std::getline(std::cin, text);
    
    if (is_empty(text)) return EXIT_FAILURE;
    if (is_valid_base(text)) return EXIT_FAILURE;
    
    int base = std::stoi(text);

    std::cout << "Введите число" << std::endl;
    std::getline(std::cin, text);
    if (is_empty(text)) return EXIT_FAILURE;

    if (symbols_check(text, base)) return EXIT_FAILURE;

    if (is_clear(text)){
        std::cout << "Число не чистое" << std::endl;
    } else {
        std::cout << "Число чистое" << std::endl;
    }
    return 0;
}
