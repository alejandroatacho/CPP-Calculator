#include <iostream>

void calc_function()
{
    double num1, num2;
    char operation;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter your second number: ";
    std::cin >> num2;

    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;

    switch (operation)
    {
    case '+':
        std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
        break;
    case '/':
        if (num2 == 0)
        {
            std::cout << "Division by zero is not allowed." << std::endl;
        }
        else
        {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        }
        break;
    default:
        std::cout << "Invalid operation entered." << std::endl;
    }
}

int main()
{
    calc_function();
    return 0;
}
