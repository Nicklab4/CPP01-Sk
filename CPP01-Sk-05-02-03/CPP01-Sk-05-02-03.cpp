//������ 3. ���������� ��� (��������������). 
//
//�������� ���������, ������� ���������� ���������� ���� � ����.
//
//���������: ����� ���� ������ �������� �� 4, ������ ���� �� ������� �� 100, ��
//�� ������� �� 400, �� ��� �� ����������!

#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int year;

	std::cout << "������� ���: ";
	std::cin >> year;

	if(year % 400 == 0)
		std::cout << "��� ���������� - 366 ����.\n";
	else if (year % 4 == 0)
		if (year % 100 == 0)
			std::cout << "��� �� ���������� - 365 ����.\n";
		else
			std::cout << "��� ���������� - 366 ����.\n";
	else
		std::cout << "��� �� ���������� - 365 ����.\n";
}