class Calculator {
public:
	double num1;
	double num2;

	double add() {
		return num1 + num2;
	}

	double multiply() {
		return num1 * num2;
	}
	double subtract_1_2() {
		return num1 - num2;
	}
	double subtract_2_1() {
		return num2 - num1;
	}
	double divide_1_2() {
		return num1 / num2;
	}
	double divide_2_1() {
		return num2 / num1;
	}
	bool set_num1(double num1)  {
		if (num1 != 0) {
			return true;
		}
		else return false;
	}
	bool set_num2(double num2) {
		if (num2 != 0) {
			return true;
		}
		else return false;
	}
};

#include <iostream>
#include "Windows.h"
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Calculator calc;
	while (true) {
		std::cout << "Введите num1 :" << std::endl;
		std::cin >> calc.num1;
		std::cout << "Введите num2 :" << std::endl;
		std::cin >> calc.num2;
		if (calc.set_num1(calc.num1) == false || calc.set_num2(calc.num2)==false) {
			std::cout << "Неверный ввод!" << std::endl;
		}
		else {
			std::cout << "num1 + num2 = " << calc.add() << std::endl;
			std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
			std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
			std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
			std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
			std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
		}

	}
	return EXIT_SUCCESS;
}