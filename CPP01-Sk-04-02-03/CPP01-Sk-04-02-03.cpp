//������ 3. ������ �����.
//
//�������� ���������, ������� ��������� ������ �����.
//���������: ����� �������� ���� ����� � ���������� �x� ���� ������ ��� ���: x = - x.

#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int number;

	std::cout << "������� ������������� ��� ������������� ����� ";
	std::cin >> number;

	if(number < 0)
		number = 0 - number;

	std::cout << "������ ����� ����� |" << number << "|\n";
}
