// CPP01-Sk-02-05-03.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

//������� 3. �����, �����!
//��� ����� �������
//�������� ��������� ��� ��������� �������� ������� ��������� � �����. �������� ����� �����,
//����� ���������� �������� ������ ��������� ���� ������ �� ������� �����. ����� �� ������������
//������������ �� �������, �� ������� ������ ������ �����, � �������, �� ������� ������ ��������
//����� � ����� ��� �������. ��� ������� ��������� � �������. ��� �������� ��������� � ����������
//� �������� � ������ ������, �������� ���� ������.

#include <iostream>

int main() { 
	std::system("chcp 1251");

	int shiftDuration = 480;
	int clientTime = 2;
	int cashierTime = 4;
	int clientsNumber = 0;
	std::cout << "��� ��������� ����������, ������� �������� ������ ��������� ������ �� �����.\n";
	std::cout << "������� ������������ ����� � �������: " << shiftDuration << "\n";
	std::cout << "������� ����� ������ ������ �����? " << clientTime << "\n";
	std::cout << "������� ����� ������ �������� �����? " << cashierTime << " \n";
	std::cout << "-----�������----- \n";

	clientsNumber = shiftDuration / (clientTime + cashierTime);

	std::cout << "�� ����� ������ " << shiftDuration << " ����� ������ ������ ��������� " << clientsNumber << " ��������.\n";
}