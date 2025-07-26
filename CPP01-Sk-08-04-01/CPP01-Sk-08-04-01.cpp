//Задача 1. Ход конём
//В рамках разработки шахматного искусственного интеллекта стоит новая задача. По
//заданным вещественным координатам коня и второй точки программа должна определить,
//может ли конь ходить в эту точку. Используйте как можно меньше конструкций if и
//логических операторов. Обеспечьте контроль ввода. 
//
//Пример
//Ввод:
//Введите местоположение коня:
//0.071;
//0.118.
//Введите местоположение точки на доске:
//0.213;
//0.068.
//
//Вывод:
//Конь в клетке (0, 1). Точка в клетке (2, 0).
//Да, конь может ходить в эту точку.

#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");
	float xStart, yStart, xEnd, yEnd;

	std::cout << "Ввод:\n";
	std::cout << "Введите местоположение коня: \n";

	while(true){
		std::cin >> xStart;

		if(xStart < 0 || xStart >= 0.8f)
			std::cout << "Координата должна быть в промежутке от 0 до 0.7999\n";
		else{
			xStart = (int)(xStart * 10);
			break;
		}
	}

	while(true){
		std::cin >> yStart;

		if(yStart < 0 || yStart >= 0.8f)
			std::cout << "Координата должна быть в промежутке от 0 до 0.7999\n";
		else{
			yStart = (int)(yStart * 10);
			break;
		}
	}

		std::cout << "Введите местоположение точки на доске: \n";

	while(true){
		std::cin >> xEnd;

		if(xEnd < 0 || xEnd >= 0.8f)
			std::cout << "Координата должна быть в промежутке от 0 до 0.7999\n";
		else{
			xEnd = (int)(xEnd * 10);
			break;
		}
	}

	while(true){
		std::cin >> yEnd;

		if(yEnd < 0 || yEnd >= 0.8f)
			std::cout << "Координата должна быть в промежутке от 0 до 0.7999\n";
		else{
			yEnd = (int)(yEnd * 10);
			break;
		}
	}

	std::cout << "Вывод:\n";
	std::cout << "Конь в клетке (" << xStart << ", " << yStart <<
			"). Точка в клетке (" << xEnd << ", " << yEnd << ").\n";


	if( (xEnd == xStart + 2 && yEnd == yStart - 1) ||
		(xEnd == xStart + 2 && yEnd == yStart + 1) ||
		(xEnd == xStart - 2 && yEnd == yStart - 1) ||
		(xEnd == xStart - 2 && yEnd == yStart + 1) ||
		(xEnd == xStart - 1 && yEnd == yStart + 2) ||
		(xEnd == xStart + 1 && yEnd == yStart + 2) ||
		(xEnd == xStart - 1 && yEnd == yStart - 2) ||
		(xEnd == xStart + 1 && yEnd == yStart - 2))
		std::cout << "Да, конь может ходить в эту точку.\n";
	else
		std::cout << "Нет, конь неможет ходить в эту точку.\n";
}