#include "checker.h"
#include <iostream>


bool is_empty(const std::string& text){
    if (text.empty()) {
        std::cerr << "Ошибка: пустой ввод" << std::endl;
        return true;
    }
    return false;
}

bool is_valid_base(const std::string& text) {
    if (text.find_first_not_of("0123456789") != std::string::npos) {
        std::cerr << "Некорректный ввод" << std::endl;
        return true; 
    }
    int base = std::stoi(text);
    if (base < 1 || base > 4) {
            std::cerr << "Выбран несуществующий вариант" << std::endl;
            return true;
    }
    return false; 
}

bool symbols_check(const std::string& text, int base){
    std::string symbols;
    base < 4 ? symbols = "0123456789" : symbols = "0123456789ABCDEFabcdef";
    if (text.find_first_not_of(symbols) != std::string::npos) {
        std::cerr << "Ошибка: число содержит недопустимые символы" << std::endl;
        return true; 
    }
    return false;
}

bool is_clear(const std::string& text){
    for (size_t i = 0; i < text.size() - 1; i++) {
        if (std::toupper(text[i]) < std::toupper(text[i + 1])) {
            std::cout << "Число не чистое" << std::endl;
            return true;
        }
    }
    return false;
}
