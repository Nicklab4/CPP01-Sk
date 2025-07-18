//������� 9. ������������� ����� (�������������� �������)
//
//� ��������� ����� �� ������ ���������, ����������� ����� ������ �� ������������� �����
//� ����������� �� ����������� ���������: 13% � �� ����� �� 10 000, 20% � �� �����
//�� 10 000 �� 50 000, 30% � �� ����� ���� 50 000.
//
//������ �� ������ �������, ������������ ����� �����, ��� ����� ����������� ����� �������
//��������: ��������� ������ 30% �� ����� ���� 50 000 ��������, ��� 30% ������������ �� ��
//���� �����, � ���� � ��� � �����, ������� ����������� 50 000. ����������: ������ 20% ��
//����� �� 10 000 �� 50 000 ��������� �������� 20% ���� � ��� ����� �����, �������
//����������� 10 000, �� �� ����������� 50 000.
//
//���, ��������, � ������ 100 000 ������� ��������� ����� �����:
//30% * (100 000 � 50 000) + 20% * (50 000 � 10 000) + 13% * 10 000 = 15 000 + 8000 + 1300 = 24 300.
//� ������ 30 000: 20% * (30 000 � 10 000) + 13% * 10 000 = 4000 + 1300 = 5300.
//
//�������� ���������, ������� ���������� � ������������ ��� ����� � ������������ �����
//������ ��� ���� �� ������������� ��������.
//

#include <tchar.h>
#include <iostream>


int main() {
	std::system("chcp 1251");

	int profit;
	std::cout << "������� ������ �������: ";
	std::cin >> profit;
	
	if (profit >= 50000) {
		int tax = (profit - 50000) * 30 / 100 + (50000 - 10000) * 20 / 100 + 10000 * 13 /100;
		std::cout << "������ ������ (30%) �����: " << tax << "\n";
	}
	else if (profit >= 10000) {
		int tax = (profit - 10000) * 20 / 100 + 10000 * 13 /100;
		std::cout << "������ ������ (20%) �����: " << tax << "\n";
	}
	else if (profit > 0) {
		int tax = profit * 13 / 100;
		std::cout << "������ ������ (13%) �����: " << tax << "\n";
	}
	else if (profit == 0)
		std::cout << "������? ������ �� ����������? � ���� ������?\n";
	else
		std::cout << "��������� �� ������������� �����\n";
}