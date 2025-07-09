//Задание 6. Улучшим барберов
//
//Помните задачу про барберов из видео 4.3? Кстати, именно оператор % мог помочь
//нам с барберами. Перепишите программу про них с его использованием для проверки
//на проблему с целочисленным делением.
//
//Напишите программу, которая отвечает на вопрос хватает ли барберов в данном
//городе если задано число людей и число барберов, а так же указано, что
//один барбер работает 8 часов в день, на одного клиента тратит 1 час
//а каждый клиент приходит раз в месяц. Воспользуйтесь для решения проблемы
//целочисленного деления оператором %


#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int manQuantity;
	int barberQuantity;
	int barberCurentQuantity;
	int barberNeeds;

	std::cout << "Введите число мужчин проживающих в городе: ";
	std::cin >> manQuantity;

	std::cout << "Введите число уже задействованных барберов: ";
	std::cin >> barberCurentQuantity;

	barberQuantity = (manQuantity / 30) / 8;

	if(manQuantity % (barberQuantity * 8 * 30) > 0)
		barberQuantity += 1;

	std::cout << barberQuantity << " барберов смогут подстричь " << barberQuantity * 8 * 30 << " мужчин.\n";

	if(barberCurentQuantity >= barberQuantity)
		std::cout << "Барберов уже достаточно.\n";

	if(barberCurentQuantity < barberQuantity)
	{
		barberNeeds = barberQuantity - barberCurentQuantity;
		std::cout << "Барберов недостаточно.\nТребуется ещё " << barberNeeds << " барберов.\n";
	}
}