//������ 5. �������� 3.0.
//
//� ����� ������������ ��������� ����� ������� ���-����� �� ���������. ������ ������
//�������������� ���-���� ������������ ������ ������ 4 �����. ���� �� �����
//����������� ����� 42, ������������ ����� ���������� ������. �������� ���������,
//������� ���������� � ������������ 4 ����� � �������� ����� ����������, ���� ��
//����� ����� 42, � ����� ������������, ���������� ��� ��� � ��������� ������. ���
//����������� ����������.

#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int pin, sum, count;
	sum = 0;

	std::cout << "������� ���-���: \n";

	while(sum != 42){
		count = 1;
		sum = 0;

		do{
			std::cout << "������� ����� " << count <<": \n";
			std::cin >> pin;
			sum += pin;
			count += 1;
		}while(count !=5);

		if(sum != 42)
			std::cout << "���� ������������, ���������� ��� ���\n";

	}
	std::cout << "���� ����������\n";
}