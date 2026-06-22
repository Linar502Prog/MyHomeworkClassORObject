class Calculator {
	double num1;
	double num2;
public:
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
	bool set_num1(double num_1)  {
		if (num_1 != 0) {
			num1 = num_1;
			return true;
		}
		else return false;
	}
	bool set_num2(double num_2) {
		if (num_2 != 0) {
			num2 = num_2;
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
		int value1, value2;
		std::cout << "Введите num1 :" << std::endl;
		std::cin >> value1;
		if (std::cin.fail()) {
			std::cout << "ВВЕДЕНО НЕКОРРЕКТНОЕ ЗНАЧЕНИЕ!!!!" << std::endl << "!!!!!ВВОДИТЬ СТРОГО ЧИСЛА!!!!!" << std::endl;
			std::cin.clear();
			std::cin.ignore();
			continue;
		}
		else {
			std::cout << "Введите num2 :" << std::endl;
			std::cin >> value2;
			if (std::cin.fail()) {
				std::cout << "ВВЕДЕНО НЕКОРРЕКТНОЕ ЗНАЧЕНИЕ!!!!" << std::endl << "!!!!!ВВОДИТЬ СТРОГО ЧИСЛА!!!!!" << std::endl;
				std::cin.clear();
				std::cin.ignore();
				continue;
			}
			else {
				if (calc.set_num1(value1) == false || calc.set_num2(value2) == false) {
					std::cout << "Неверный ввод!" << std::endl << "(НОЛЬ ВВОДИТЬ НЕЛЬЗЯ, ТАК КАК НА НОЛЬ ДЕЛИТЬ ЗАПРЕЩЕНО)!" << std::endl;
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
		}
	}
	return EXIT_SUCCESS;
}
