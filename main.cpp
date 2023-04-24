#include <iostream>

#include "math_functions.h"

int main()
{
	double Number1, Number2;
	int Operation;
	std::cout << "Enter first number: ";
	std::cin >> Number1;
	std::cout << "Enter second number: ";
	std::cin >> Number2;
	std::cout << "Choose operation(1 - Add, 2 - Subtraction, 3 - Multiplication, 4 - Division, 5 - Degree): ";
	std::cin >> Operation;
	switch (Operation) {
	case 1:
		std::cout << Number1 << " + " << Number2 << " = " << sum(Number1, Number2);
		break;
	case 2:
		std::cout << Number1 << " - " << Number2 << " = " << sub(Number1, Number2);
		break;
	case 3:
		std::cout << Number1 << " * " << Number2 << " = " << mul(Number1, Number2);
		break;
	case 4:
		if (Number2 == 0) {
			std::cout << "Division on zero!";
		}
		else {
			std::cout << Number1 << " / " << Number2 << " = " << division(Number1, Number2);
		}
		break;
	case 5:
		std::cout << Number1 << " ^ " << Number2 << " = " << deg(Number1, Number2);
		break;
	default:
		std::cout << "Incorrect input!";
	}
}