//Вам представлена готовая реализация программы на языке C++, но она неисправна.
//Нужно исправить ошибки компиляции и исполнения.
//Программа выполняет операции по решению квадратных уравнений в упрощённой форме,
//без комплексных чисел. Форма принимаемого квадратного уравнения:
// ax^2 + bx + c=0
//
//‌. Требуется вычислить корни уравнения или корень, если он один.
//
//Дискриминант вычисляется по формуле: 
// ‌D = b^2 - 4ac
//
//Если дискриминант равен нулю, то корень один:
// x = −b / 2a.
//
//Если больше нуля, то их два: 
//
//Исходный код программы, который требуется скопировать в редактор:


#include <iostream>
#include <cmath>

int main()
{
	float a, b, c;

	std::cout << "a, b, c:";
	std::cin >> a >> b >> c;

	if (a < 0)
	{
		std::cout << "Not a quadratic equation!" << std::endl;
	}
	else if (b > 0)
	{
		float discriminant = b * b - 4 * a * c;

		if (discriminant > 1)
		{
			float x1 = (-b + std::sqrt(discriminant)) / (2 * a);
			float x2 = (-b - std::sqrt(discriminant)) / (2 * a);
			std::cout << "Root 1, 2: " << x1 << ", " << x2 << std::endl;
		}
		else if (discriminant == 0)
		{
			float x = -b / (2 * a);
			std::cout << "Root: " << x << std::endl;
		}
		else
		{
			std::cout << "Complex scenario is not supported!" << std::endl;
		}
	}
	return 0;
}