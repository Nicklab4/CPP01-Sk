//1. Время в пути
//Поезд отправляется в AA часов BB минут и прибывает в пункт назначения в CC часов DD
//минут. Сколько часов и минут он находится в пути?
//
//Напишите программу, которая принимает от пользователя две строки — время отправления
//и время прибытия поезда. Время задаётся строкой из пяти символов в формате HH:MM.
//Обеспечьте контроль ввода, убедитесь также, что время корректно.
//
//Программа должна ответить, сколько часов и минут поезд находится в пути. Если время
//отправления больше времени прибытия, считайте, что поезд прибывает в пункт
//назначения на следующий день.
//
//Примеры выполнения
//Введите время отправления (HH:MM): 09:20
//Введите время прибытия (HH:MM): 10:20
//Поездка составила 1 ч. 0 мин.
//
//Введите время отправления (HH:MM): 09:20
//Введите время прибытия (HH:MM): 08:40
//Поездка составила 23 ч. 20 мин.
//
//Что оценивается
//Программа корректно считает и время в течение суток, и время поездки с прибытием на следующий день.
//Обеспечен контроль ввода и по длине строк, и по вводимым символам.

#include <tchar.h>
#include <iostream>
#include <string>

int main(){
	std::system("chcp 1251");

	std::string timeStart, timeFinish;
	int hourStart, minutStart, hourFinish, minutFinish, hour, minut, totalStart, totalFinish;
	bool parsing = true;

	hour = 0;
	minut = 0;

	std::cout << "Введите время отправления (HH:MM): ";
	std::cin >> timeStart;

	std::cout << "Введите время прибытия (HH:MM): ";
	std::cin >> timeFinish;

	if(timeStart.length() != 5)
		std::cout << "Ошибка! Время оправления должно быть 5 символов.\n";
	else if(timeFinish.length() != 5)
		std::cout << "Ошибка! Время прибытия должно быть 5 символов.\n";
	else {
		for(int i = 0; i < 5; i++)
			if(i == 2 && timeStart[2] != ':'){
				std::cout << "Неверно указан разделитель между цифрами.\n";
				parsing = false;
				break;
			}
			else if(timeStart[i] >= '0' && timeStart[i] <= '9');
			else {
				std::cout << "Ошибка! Время содержит не числовые символы.\n";
				parsing = false;
				break;
			}
	}

	if(parsing){

		hourStart = (timeStart[0] - '0') * 10 + (timeStart[1] - '0');
		minutStart = (timeStart[3] - '0') * 10 + (timeStart[4] - '0');
		hourFinish = (timeFinish[0] - '0') * 10 + (timeFinish[1] - '0');
		minutFinish = (timeFinish[3] - '0') * 10 + (timeFinish[4] - '0');

		if(hourStart < 0 || hourStart > 23){
			std::cout << "Ошибка! Неверно указаны часы времени отправления.\n";
			parsing = false;
		}
		else if(minutStart < 0 || minutStart > 59){
			std::cout << "Ошибка! Неверно указаны минуты времени отправления.\n";
			parsing = false;
		}
		else if(hourFinish < 0 || hourFinish > 23){
			std::cout << "Ошибка! Неверно указаны часы времени прибытия.\n";
			parsing = false;
		}
		else if(minutFinish < 0 || minutFinish > 59){
			std::cout << "Ошибка! Неверно указаны минуты времени прибытия.\n";
			parsing = false;
		}
	}

	if(parsing){
		totalStart = hourStart * 60 + minutStart;
		totalFinish = hourFinish * 60 + minutFinish;

		if(totalStart >= totalFinish)
			minut = 24*60 - (totalStart - totalFinish);
		else
			minut = totalFinish - totalStart;

		hour = minut / 60;
		minut -= hour * 60;

		std::cout << "Поездка составила " << hour << " ч. " << minut << " мин.\n";
	}
}