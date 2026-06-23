class Counter {
	int num;
public:
	Counter(int value) {
		num = value;
	}
	Counter() {
		num = 1;
	}
	int cur_count() {
		return num;
	}
	int incr_count() {
		num++;
		return num;
	}
	int red_count() {
		num--;
		return num;
	}
	bool exit_count() {
		return false;
	}
};
#include <iostream>
#include "Windows.h"
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int value;
	std::string word;
	char command;
	bool flag = true;
	Counter count;
	std::cout << "Вы хотите указать начальное значение счётчика ? Введите да или нет : " << std::endl;
	std::cin >> word;
	if (word == "да") {
		std::cout << "Введите начальное значение счётчика : " << std::endl;
		std::cin >> value;
		count = Counter(value);
	}
	while (flag) {
		std::cout << "Введите команду('+', '-', '=' или 'х') : " << std::endl;
		std::cin >> command;
		if (command == '+') {
			std::cout << count.incr_count() <<std::endl;
		}
		else if (command == '-') {
			std::cout << count.red_count() << std::endl;
		}
		else if (command == '=') {
			std::cout << count.cur_count() << std::endl;
		}
		else if (command == 'х') {
			std::cout << "До свидания! " << std::endl;
			flag = count.exit_count();
		}
	}
	return EXIT_SUCCESS;
}
