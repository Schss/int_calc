#include "operations.h"
#include <iostream>

int main()
{
    int (*op) (int, int);

    std::cout << "Chose operation\n";
    std::cout << "Valid operations are: [+] [-] [*] [/]\n";

    char operation;

    std::cin >> operation;

    switch (operation)
    {
    case '+':
        op = f_add;
        break;
    case '-':
        op = f_add;
        break;
    case '*':
        op = f_add;
        break;
    case '/':
        op = f_add;
        break;
    default:
        std::cout << "Invalid operation\n";
        return 1;
        break;
    }

    int operand1, operand2;
    std::cout << "First operand\n";
    std::cin >> operand1;
    std::cout << "Second operand\n";
    std::cin >> operand2;
    std::cout << "Result " << op(operand1, operand2) << "\n";
    return 0;
}