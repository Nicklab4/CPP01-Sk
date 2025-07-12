//Задача 3. Треугольник.
//
//У меня есть три деревянных палочки, длины этих палочек равны A, B и C. Напишите
//программу, которая по данным длинам определяет, можно ли из этих трех палочек
//сложить треугольник.

#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int sideA;
	int sideB;
	int sideC;

	std::cout << "Введите длинну стороны A: ";
	std::cin >> sideA;

	std::cout << "Введите длинну стороны B: ";
	std::cin >> sideB;

	std::cout << "Введите длинну стороны C: ";
	std::cin >> sideC;

	if(sideA + sideB < sideC || sideA + sideC < sideB || sideC + sideB < sideA)
		std::cout << "Из этих длин нельзя составить треугольник\n";
	else
		std::cout << "Из этих длин можно составить треугольник\n";
}