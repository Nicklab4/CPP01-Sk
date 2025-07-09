//Задача 3. Модуль числа.
//
//Напишите программу, которая вычисляет модуль числа.
//Подсказка: чтобы обратить знак числа в переменной ‘x’ надо писать вот так: x = - x.

#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int number;

	std::cout << "Введите отрицательное или положительное число ";
	std::cin >> number;

	if(number < 0)
		number = 0 - number;

	std::cout << "Модуль числа будет |" << number << "|\n";
}
