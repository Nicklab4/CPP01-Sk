// CPP01-Sk-02-05-02.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

//������� 2. ����������� ��������� ������
//��� ����� �������
//�������� ����������� ��� ������� ������ ��������� ������. ��� �������������� ���:
//��������� ������  + ��������� �������� � ������. ��� �������� ��������� � ����������
//� �������� � ������ ������, �������� ���� ������ (���� ��� cout).

#include <iostream>

int main() { 
	std::system("chcp 1251");

	int productCost = 64; 
	int shippingCost = 200; 
	int diskount = 50; 
	int totalCost = 0; 

	std::cout << "====================\n"; 
	std::cout << "�������� ��� \n"; 
	std::cout << "====================\n"; 
	std::cout << "������������ ������:\n"; 
	std::cout << "��������� 80��.: \n"; 
	std::cout << "--------------------\n"; 
	std::cout << "��������� ������:\n"; 
	std::cout << "+ " << productCost << " ���.\n"; 
	std::cout << "--------------------\n"; 
	std::cout << "��������� ��������:\n"; 
	std::cout << "+ " << shippingCost << " ���.\n"; 
	std::cout << "--------------------\n"; 
	std::cout << "������:\n"; 
	std::cout << "- " << diskount << " ���.\n"; 

	totalCost = productCost + shippingCost - diskount;

	std::cout << "====================\n"; 
	std::cout << "�����: \n"; 
	std::cout << totalCost << " ���.\n"; 
}