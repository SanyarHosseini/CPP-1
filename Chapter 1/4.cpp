#include <iostream>

int main()
{
    std::cout << "\\a (Bell):\t" << "\a" << std::endl;
    std::cout << "\\b (Backspace):\t" << "Hello\bWorld" << std::endl;
    std::cout << "\\n (Newline):\tHello\nWorld" << std::endl;
    std::cout << "\\r (Carriage return):\tHello\rWorld" << std::endl;
    std::cout << "\\t (Tab):\tHello\tWorld" << std::endl;
    std::cout << "\\v (Vertical tab):\tHello\vWorld" << std::endl;
    std::cout << "\\' (Single quote):\t\'" << std::endl;
    std::cout << "\\\" (Double quote):\t\"" << std::endl;
    std::cout << "\\\\ (Backslash):\t\\" << std::endl;
    std::cout << "\\? (Question mark):\t\?" << std::endl;

    return 0;
}
