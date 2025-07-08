// CPP01-Sk-03-05-01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

//Задача 1. Симулятор маршрутки
//Что нужно сделать
//Напишите программу, которая симулирует работу маршрутки. Она умеет объявлять остановки
//и узнавать у пользователя, сколько человек вышло и зашло на остановке. Пассажиры
//оплачивают проезд при входе. Работать она должна примерно так:
//
//Прибываем на остановку «Улица программистов». В салоне пассажиров: 0
//Сколько пассажиров вышло на остановке? 0
//Сколько пассажиров зашло на остановке? 3
//Отправляемся с остановки «Улица программистов». В салоне пассажиров: 3
//-----------Едем---------
//Прибываем на остановку «Проспект алгоритмов». В салоне пассажиров: 3
//…
//…
//Маршрут состоит из четырёх остановок. Напишите программу так, чтобы в конце она выводила,
//сколько денег мы заработали при условии, что билет стоит 20 руб., а расходы следующие:
//
//четверть — на зарплату водителю;
//пятая часть — на топливо;
//пятая часть — на налоги;
//пятая часть — на ремонт машины.
//Формат вывода (после прибытия на последнюю остановку):
//Всего заработали: 100 руб.
//Зарплата водителя: 25 руб.
//Расходы на топливо: 20 руб.
//Налоги: 20 руб.
//Расходы на ремонт машины: 20 руб.
//Итого доход: 15 руб.

#include <iostream>
#include <string>

int main() {
	std::system("chcp 1251");

	int passengerCount = 0;
	int passengerIn;
	int passengerOut;
	int totalPassenger = 0;

	std::string stopName1 = "Улица программистов";
	std::string stopName2 = "Проспект алгоритмов";
	std::string stopName3 = "ДК Браузерная";
	std::string stopName4 = "Психо-Неврологический Диспансер" ;

	std::cout << "Прибываем на остановку «" << stopName1 << "». В салоне пассажиров: " << passengerCount << "\n";
	std::cout << "Сколько пассажиров вышло на остановке? ";
	std::cin >> passengerOut;

	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> passengerIn;

	passengerCount = passengerCount - passengerOut + passengerIn;
	totalPassenger += passengerIn;
	std::cout << "Отправляемся с остановки «" << stopName2 << "». В салоне пассажиров:  " << passengerCount << "\n";

	std::cout << "-----------Едем---------\n";
	std::cout << "Прибываем на остановку «" << stopName2 << "». В салоне пассажиров: " << passengerCount << "\n";
	std::cout << "Сколько пассажиров вышло на остановке? ";
	std::cin >> passengerOut;

	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> passengerIn;

	passengerCount = passengerCount - passengerOut + passengerIn;
	totalPassenger += passengerIn;
	std::cout << "Отправляемся с остановки «" << stopName3 << "». В салоне пассажиров:  " << passengerCount << "\n";

	std::cout << "-----------Едем---------\n";
	std::cout << "Прибываем на остановку «" << stopName3 << "». В салоне пассажиров: " << passengerCount << "\n";
	std::cout << "Сколько пассажиров вышло на остановке? ";
	std::cin >> passengerOut;

	std::cout << "Сколько пассажиров зашло на остановке? ";
	std::cin >> passengerIn;

	passengerCount = passengerCount - passengerOut + passengerIn;
	totalPassenger += passengerIn;
	std::cout << "Отправляемся с остановки «" << stopName4 << "». В салоне пассажиров:  " << passengerCount << "\n";

	std::cout << "-----------Едем---------\n";
	std::cout << "Прибываем на остановку «" << stopName4 << "». В салоне пассажиров: " << passengerCount << "\n";
	std::cout << "Сколько пассажиров вышло на остановке? ";
	std::cin >> passengerOut;
	passengerCount = passengerCount - passengerOut;
	std::cout << "========================\n";


	int ticketCost = 20;
	int totalEarned = 0;
	int driverSalary;
	int fuelCosts;
	int taxes;
	int repairСosts;

	totalEarned = totalPassenger * ticketCost;
	std::cout << "Всего заработали: " << totalEarned << " руб.\n";

	driverSalary = totalEarned / 4;
	std::cout << "Зарплата водителя: " << driverSalary << " руб. \n";

	fuelCosts = totalEarned / 5;
	std::cout << "Расходы на топливо: " << fuelCosts << " руб.\n";

	taxes = totalEarned / 5;
	std::cout << "Налоги: " << taxes << " руб.\n";

	repairСosts = totalEarned / 5;
	std::cout << "Расходы на ремонт машины: " << repairСosts << " руб.\n";

	totalEarned = totalEarned - driverSalary - fuelCosts - taxes - repairСosts;
	std::cout << "-----------------------\n";
	std::cout << "Итого доход: " << totalEarned << "\n";

}