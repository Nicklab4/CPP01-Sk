//������� 8. �������� (�������������� �������)
//
//� ������ ���������� �������� ��� ����������. �� �������� ����� ���� ��� �������,
//��� � �����������. �������� ���������, ������� ��������� ������� ����� �����
//������� � ����� ������ ���������� �����������, � ����� ������� ��������������
//������� ���� ����������� ������.
//
//������
//������� �������� ������� ����������: 45 ������
//������� �������� ������� ����������: 45 ������
//������� �������� �������� ����������: 45 ������
//-----�������-----
//����� ������� �������� � ������: 45 ������
//������� ����� ����� ������� � ����� ������ ��������� � ������: 0 ������
//������� �������� � ������: 45 ������

#include <tchar.h>
#include <iostream>


int main() {
	std::system("chcp 1251");

	int salary1;
	int salary2;
	int salary3;
	int maxSalary;
	int minSalary;

	std::cout << "������� �������� ������� ����������: ";
	std::cin >> salary1;

	std::cout << "������� �������� ������� ����������: ";
	std::cin >> salary2;

	std::cout << "������� �������� �������� ����������: ";
	std::cin >> salary3;

	std::cout << "-----�������-----\n";


	if(salary1 >= salary2)
		if(salary1 >= salary3){
			std::cout << "����� ������� �������� � ������: " << salary1 << " ������\n";
			maxSalary = salary1;
		}
		else {
			std::cout << "����� ������� �������� � ������: " << salary3 << " ������\n";
			maxSalary = salary3;
		}
	else
		if(salary2 >= salary3) {
			std::cout << "����� ������� �������� � ������: " << salary2 << " ������\n";
			maxSalary = salary2;
		}
		else {
			std::cout << "����� ������� �������� � ������: " << salary3 << " ������\n";
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
	
	std::cout << "������� ����� ����� ������� � ����� ������ ��������� � ������: " << maxSalary - minSalary << " ������\n";
	std::cout << "������� �������� � ������: " << (salary1 + salary2 + salary3)/3 << " ������\n";

}