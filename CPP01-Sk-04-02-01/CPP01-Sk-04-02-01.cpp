// CPP01-Sk-04-02-01.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

//������ 1. ����������� ������.
//
//�� ��������� 3 ������ � ��������. ���� ����� ������ ���� ��������� 10 000 ���,
//��� ����� ������� ������ 10%. �������� ��������� ������� ����������� 3 ���������
//������ � ��������� ����� ����.

#include <iostream>

int main() {
	std::system("chcp 1251");

	int goodsValue;
	int sum = 0;

	std::cout << "������� ��������� ������ �1: ";
	std::cin >> goodsValue;
	sum += goodsValue;

	std::cout << "������� ��������� ������ �2: ";
	std::cin >> goodsValue;
	sum += goodsValue;

	std::cout << "������� ��������� ������ �3: ";
	std::cin >> goodsValue;
	sum += goodsValue;

	if(sum >= 10000){
		std::cout << "===========================\n";
		std::cout << "���� ������ ����� 10%\n";
		sum *= 0.9;
	}

	std::cout << "===========================\n";
	std::cout << "����� ���� ����������: " << sum << "\n";
}