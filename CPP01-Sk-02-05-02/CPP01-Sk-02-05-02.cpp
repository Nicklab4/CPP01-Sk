// CPP01-Sk-02-05-02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

//Задание 2. Калькулятор стоимости товара
//Что нужно сделать
//Напишите калькулятор для расчёта полной стоимости товара. Она рассчитывается так:
//стоимость товара  + стоимость доставки – скидка. Все значения сохраните в переменные
//и выводите в нужных местах, имитируя ввод данных (речь про cout).

#include <iostream>

int main() { 
	std::system("chcp 1251");

	int productCost = 64; 
	int shippingCost = 200; 
	int diskount = 50; 
	int totalCost = 0; 

	std::cout << "====================\n"; 
	std::cout << "Кассовый чек \n"; 
	std::cout << "====================\n"; 
	std::cout << "Наименование товара:\n"; 
	std::cout << "Сметанник 80гр.: \n"; 
	std::cout << "--------------------\n"; 
	std::cout << "Стоимость товара:\n"; 
	std::cout << "+ " << productCost << " руб.\n"; 
	std::cout << "--------------------\n"; 
	std::cout << "Стоимость доставки:\n"; 
	std::cout << "+ " << shippingCost << " руб.\n"; 
	std::cout << "--------------------\n"; 
	std::cout << "Скидка:\n"; 
	std::cout << "- " << diskount << " руб.\n"; 

	totalCost = productCost + shippingCost - diskount;

	std::cout << "====================\n"; 
	std::cout << "Итого: \n"; 
	std::cout << totalCost << " руб.\n"; 
}