//������ 3. �����������.
//
//� ���� ���� ��� ���������� �������, ����� ���� ������� ����� A, B � C. ��������
//���������, ������� �� ������ ������ ����������, ����� �� �� ���� ���� �������
//������� �����������.

#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int sideA;
	int sideB;
	int sideC;

	std::cout << "������� ������ ������� A: ";
	std::cin >> sideA;

	std::cout << "������� ������ ������� B: ";
	std::cin >> sideB;

	std::cout << "������� ������ ������� C: ";
	std::cin >> sideC;

	if(sideA + sideB < sideC || sideA + sideC < sideB || sideC + sideB < sideA)
		std::cout << "�� ���� ���� ������ ��������� �����������\n";
	else
		std::cout << "�� ���� ���� ����� ��������� �����������\n";
}