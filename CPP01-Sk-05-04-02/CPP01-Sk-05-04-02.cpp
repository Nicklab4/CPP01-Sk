//������ 2. � ������... � �������... � ������... ������������ �������!
//"�����-��� � ���� �����".
//
//� �����-���� ���� ������ ������� A �� B �� C. � ��� ���� �����, � ������� ���������
//������������� ��������� ������� X �� Y. ������ ��� �������� ��� ��� ������ ��,
//�����-��� ����� �����, ��������� �� ��������� ���� ������ � ��� ���������?
//�������� ���������, ������� �� ������ ���� ������ �������� �� ���� ������.
//����������, ������ ����� ������������.


#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int sideA, sideB, sideC, sideX, sideY;
	int temp;

	std::cout << "������� ������� ������ ������� A, B, C: ";
	std::cin >> sideA >> sideB >> sideC;

	std::cout << "������� ������� ������ ��������� X � Y: ";
	std::cin >> sideX >> sideY;

	// ��������� ������� ��������� �� ��������
	if(sideX < sideY){
		temp = sideX;
		sideX = sideY;
		sideY = temp;}

	// ��������� ������� ������� �� ��������
	if(sideA < sideB){
		temp = sideA;
		sideA = sideB;
		sideB = temp;}

	if(sideB < sideC){
		temp = sideB;
		sideB = sideC;
		sideC = temp;}

	if(sideA < sideB){
		temp = sideA;
		sideA = sideB;
		sideB = temp;}

	// ���������� ������� ������� � ����������
	//if((sideA <= sideX && sideB <= sideY) || (sideB <= sideX && sideC <= sideY))
	// ����� ���������� ���������� �������� ������ ��� ������� �������
	if(sideB <= sideX && sideC <= sideY)
		std::cout << "������ ��������.\n";
	else
		std::cout << "������ �� ��������.\n";

	std::cout << "���������: " << sideX << "x" << sideY << "\n";
	std::cout << "������: " << sideA << "x" << sideB << "x" << sideC << "\n";

}