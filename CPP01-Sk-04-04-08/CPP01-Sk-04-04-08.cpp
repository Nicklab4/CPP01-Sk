//Задание 8. Зарплата (дополнительное задание)
//
//В отделе маркетинга работают три сотрудника. Их зарплаты могут быть как разными,
//так и одинаковыми. Напишите программу, которая вычисляет разницу между самой
//высокой и самой низкой зарплатами сотрудников, а также среднее арифметическое
//зарплат всех сотрудников отдела.
//
//Пример
//Введите зарплату первого сотрудника: 45 рублей
//Введите зарплату второго сотрудника: 45 рублей
//Введите зарплату третьего сотрудника: 45 рублей
//-----Считаем-----
//Самая высокая зарплата в отделе: 45 рублей
//Разница между самой высокой и самой низкой зарплатой в отделе: 0 рублей
//Средняя зарплата в отделе: 45 рублей

#include <tchar.h>
#include <iostream>


int main() {
	std::system("chcp 1251");

	int salary1;
	int salary2;
	int salary3;
	int maxSalary;
	int minSalary;

	std::cout << "Введите зарплату первого сотрудника: ";
	std::cin >> salary1;

	std::cout << "Введите зарплату второго сотрудника: ";
	std::cin >> salary2;

	std::cout << "Введите зарплату третьего сотрудника: ";
	std::cin >> salary3;

	std::cout << "-----Считаем-----\n";


	if(salary1 >= salary2)
		if(salary1 >= salary3){
			std::cout << "Самая высокая зарплата в отделе: " << salary1 << " рублей\n";
			maxSalary = salary1;
		}
		else {
			std::cout << "Самая высокая зарплата в отделе: " << salary3 << " рублей\n";
			maxSalary = salary3;
		}
	else
		if(salary2 >= salary3) {
			std::cout << "Самая высокая зарплата в отделе: " << salary2 << " рублей\n";
			maxSalary = salary2;
		}
		else {
			std::cout << "Самая высокая зарплата в отделе: " << salary3 << " рублей\n";
			maxSalary = salary3;
		}

	if(salary1 <= salary2)
		if(salary1 <= salary3)
			minSalary = salary1;
		else
			minSalary = salary3;
	else
		if(salary2 <= salary3)
			minSalary = salary2;
		else
			minSalary = salary3;
	
	std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << maxSalary - minSalary << " рублей\n";
	std::cout << "Средняя зарплата в отделе: " << (salary1 + salary2 + salary3)/3 << " рублей\n";

}