//������� 4. �������� � 2
//
//� ��������� ���� ������ ������������ 100, 200, 500, 1 000, 2 000 � 5 000 ������.
//���������� ������ ����������� �����, �������� ��� ����� ������� ������ �����.
//
//�������� ��������� ��� ���������, ������� �� ��������� ����� N: 
//������, ������� ����� ������� �������� ����� ������ (4 �� 200, 1 �� 1 000) ���
//��������� ����� ����� N ������; ���� �������, ��� ������ ����� N ������ ����������,
//�������� ���� N �� ������� �� 100.
//������, ��� �������� �� ����� ������ �� ���� ��� ����� 150 000 ������. 
//
//��� ������� ��������� ����� ����� ������ ���� ������ ��������� �� ������.
//��������, 800 ������ ����� ������ ��� 1 �� 500, 1 �� 200 � ��� 1 �� 100.
//
//������ � ������������
//����������� ��� �������, ��� � ��������� ������� �� �������.
//������������ ������ ����� ����������� ����� �����.
//�������, ��� �������� �� ����� ������ �� ���� ��� ����� 150 000 ������


#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int n;

	std::cout << "������� ����� ������� ���������� ������: ";
	std::cin >> n;

	if(n >= 100 && n <= 150000){
		std::cout << "����� ����� ������ ���: ";
		if(n >= 5000){
			std::cout << n / 5000 << " �� 5000, ";
			n = n - (n /5000 * 5000);
		}
		if(n >= 2000){
			std::cout << n / 2000 << " �� 2000, ";
			n = n - (n /2000 * 2000);
		}
		if(n >= 1000){
			std::cout << n / 1000 << " �� 1000, ";
			n = n - (n /1000 * 1000);
		}
		if(n >= 500){
			std::cout << n / 500 << " �� 500, ";
			n = n - (n /500 * 500);
		}
		if(n >= 200){
			std::cout << n / 200 << " �� 200, ";
			n = n - (n /200 * 200);
		}
		if(n >= 100){
			std::cout << n / 100 << " �� 100, ";
			n = n - (n /100 * 100);
		}
		std::cout << "������. \n";
	}

	else
		std::cout << "����� ��������� 150 000 ���.";

}