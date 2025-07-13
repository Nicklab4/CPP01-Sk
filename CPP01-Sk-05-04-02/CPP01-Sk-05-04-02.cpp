//Задача 2. — Входит... И выходит... И входит... Замечательно выходит!
//"Винни-Пух и день забот".
//
//У Винни-Пуха есть кирпич размера A на B на C. А еще есть стена, в которой проделано
//прямоугольное отверстие размера X на Y. Прежде чем подарить все это ослику Иа,
//Винни-Пух хочет знать, получится ли просунуть этот кирпич в это отверстие?
//Напишите программу, которая по данным пяти числам отвечает на этот вопрос.
//Разумеется, кирпич можно поворачивать.


#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int sideA, sideB, sideC, sideX, sideY;
	int temp;

	std::cout << "Введите размеры сторон кирпича A, B, C: ";
	std::cin >> sideA >> sideB >> sideC;

	std::cout << "Введите размеры сторон отверстия X и Y: ";
	std::cin >> sideX >> sideY;

	// Сортируем стороны отверстия по убыванию
	if(sideX < sideY){
		temp = sideX;
		sideX = sideY;
		sideY = temp;}

	// Сортируем стороны кирпича по убыванию
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

	// Сравниваем стороны кирпича с отверстием
	//if((sideA <= sideX && sideB <= sideY) || (sideB <= sideX && sideC <= sideY))
	// после сортировки достаточно сравнить только две меньшие стороны
	if(sideB <= sideX && sideC <= sideY)
		std::cout << "Кирпич подходит.\n";
	else
		std::cout << "Кирпич не подходит.\n";

	std::cout << "Отверстие: " << sideX << "x" << sideY << "\n";
	std::cout << "Кирпич: " << sideA << "x" << sideB << "x" << sideC << "\n";

}