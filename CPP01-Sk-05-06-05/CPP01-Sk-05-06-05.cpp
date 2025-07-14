//Задание 5. Усложнение задачи про кирпич
//Что нужно сделать
//Напишите программу, которая проверяет, можно ли первую коробку положить внутрь второй.
//
//Условие:
//В модуле вы разобрали, как написать программу для проверки, удастся ли поместить
//кирпич определённых размеров в определённое прямоугольное отверстие.
//
//Теперь представьте, что у вас есть две коробки. Одна размером A х B х C,
//а другая — M х N х K.
//
//Напишите программу, которая по шести данным числам A, B, C, M, N, K проверяет, можно
//ли первую коробку положить внутрь второй.
//
//Коробки можно как угодно переворачивать, но одна коробка должна помещаться в другую
//целиком.
//
//Советы и рекомендации
//Одна коробка в другую должна помещаться по всем трём измерениям.
//Постарайтесь сделать свою программу по возможности лаконичнее.

#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int sideA, sideB, sideC, sideM, sideN, sideK;
	int temp;

	std::cout << "Введите размеры сторон коробки A, B, C: ";
	std::cin >> sideA >> sideB >> sideC;

	std::cout << "Введите размеры сторон второй коробки M, N и K: ";
	std::cin >> sideM >> sideN >> sideK;

	// Сортируем стороны коробки A, B, C
	if(sideA < sideB){
		temp = sideA;
		sideA = sideB;
		sideB = temp;}

	if(sideB < sideC){
		temp = sideB;
		sideB = sideC;
		sideC = temp;}

	if(sideA < sideB){
		temp = sideA;
		sideA = sideB;
		sideB = temp;}

	// Сортируем стороны второй коробки M, N и K
	if(sideM < sideN){
		temp = sideM;
		sideM = sideN;
		sideN = temp;}

	if(sideN < sideK){
		temp = sideN;
		sideN = sideK;
		sideK = temp;}

	if(sideM < sideK){
		temp = sideM;
		sideM = sideK;
		sideK = temp;}

	// Сравниваем стороны коробок
	if(sideA <= sideM && sideB <= sideN && sideC <= sideK)
		std::cout << "Коробку A, B, C - можно поместить внутрь коробки M, N, K.\n";
	else
		std::cout << "Коробку A, B, C - нельзя поместить внутрь коробки M, N, K.\n";

	std::cout << "Коробка A, B, C: " << sideA << "x" << sideB << "x" << sideC << "\n";
	std::cout << "Kоробка M, N, K: " << sideM << "x" << sideN << "x" << sideK << "\n";

}