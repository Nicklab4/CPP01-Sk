// CPP01-Sk-03-05-01.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

//������ 1. ��������� ���������
//��� ����� �������
//�������� ���������, ������� ���������� ������ ���������. ��� ����� ��������� ���������
//� �������� � ������������, ������� ������� ����� � ����� �� ���������. ���������
//���������� ������ ��� �����. �������� ��� ������ �������� ���:
//
//��������� �� ��������� ������ �������������. � ������ ����������: 0
//������� ���������� ����� �� ���������? 0
//������� ���������� ����� �� ���������? 3
//������������ � ��������� ������ �������������. � ������ ����������: 3
//-----------����---------
//��������� �� ��������� ��������� ����������. � ������ ����������: 3
//�
//�
//������� ������� �� ������ ���������. �������� ��������� ���, ����� � ����� ��� ��������,
//������� ����� �� ���������� ��� �������, ��� ����� ����� 20 ���., � ������� ���������:
//
//�������� � �� �������� ��������;
//����� ����� � �� �������;
//����� ����� � �� ������;
//����� ����� � �� ������ ������.
//������ ������ (����� �������� �� ��������� ���������):
//����� ����������: 100 ���.
//�������� ��������: 25 ���.
//������� �� �������: 20 ���.
//������: 20 ���.
//������� �� ������ ������: 20 ���.
//����� �����: 15 ���.

#include <iostream>
#include <string>

int main() {
	std::system("chcp 1251");

	int passengerCount = 0;
	int passengerIn;
	int passengerOut;
	int totalPassenger = 0;

	std::string stopName1 = "����� �������������";
	std::string stopName2 = "�������� ����������";
	std::string stopName3 = "�� ����������";
	std::string stopName4 = "�����-��������������� ���������" ;

	std::cout << "��������� �� ��������� �" << stopName1 << "�. � ������ ����������: " << passengerCount << "\n";
	std::cout << "������� ���������� ����� �� ���������? ";
	std::cin >> passengerOut;

	std::cout << "������� ���������� ����� �� ���������? ";
	std::cin >> passengerIn;

	passengerCount = passengerCount - passengerOut + passengerIn;
	totalPassenger += passengerIn;
	std::cout << "������������ � ��������� �" << stopName2 << "�. � ������ ����������:  " << passengerCount << "\n";

	std::cout << "-----------����---------\n";
	std::cout << "��������� �� ��������� �" << stopName2 << "�. � ������ ����������: " << passengerCount << "\n";
	std::cout << "������� ���������� ����� �� ���������? ";
	std::cin >> passengerOut;

	std::cout << "������� ���������� ����� �� ���������? ";
	std::cin >> passengerIn;

	passengerCount = passengerCount - passengerOut + passengerIn;
	totalPassenger += passengerIn;
	std::cout << "������������ � ��������� �" << stopName3 << "�. � ������ ����������:  " << passengerCount << "\n";

	std::cout << "-----------����---------\n";
	std::cout << "��������� �� ��������� �" << stopName3 << "�. � ������ ����������: " << passengerCount << "\n";
	std::cout << "������� ���������� ����� �� ���������? ";
	std::cin >> passengerOut;

	std::cout << "������� ���������� ����� �� ���������? ";
	std::cin >> passengerIn;

	passengerCount = passengerCount - passengerOut + passengerIn;
	totalPassenger += passengerIn;
	std::cout << "������������ � ��������� �" << stopName4 << "�. � ������ ����������:  " << passengerCount << "\n";

	std::cout << "-----------����---------\n";
	std::cout << "��������� �� ��������� �" << stopName4 << "�. � ������ ����������: " << passengerCount << "\n";
	std::cout << "������� ���������� ����� �� ���������? ";
	std::cin >> passengerOut;
	passengerCount = passengerCount - passengerOut;
	std::cout << "========================\n";


	int ticketCost = 20;
	int totalEarned = 0;
	int driverSalary;
	int fuelCosts;
	int taxes;
	int repair�osts;

	totalEarned = totalPassenger * ticketCost;
	std::cout << "����� ����������: " << totalEarned << " ���.\n";

	driverSalary = totalEarned / 4;
	std::cout << "�������� ��������: " << driverSalary << " ���. \n";

	fuelCosts = totalEarned / 5;
	std::cout << "������� �� �������: " << fuelCosts << " ���.\n";

	taxes = totalEarned / 5;
	std::cout << "������: " << taxes << " ���.\n";

	repair�osts = totalEarned / 5;
	std::cout << "������� �� ������ ������: " << repair�osts << " ���.\n";

	totalEarned = totalEarned - driverSalary - fuelCosts - taxes - repair�osts;
	std::cout << "-----------------------\n";
	std::cout << "����� �����: " << totalEarned << "\n";

}