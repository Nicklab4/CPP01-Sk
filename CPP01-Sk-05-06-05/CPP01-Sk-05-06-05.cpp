//������� 5. ���������� ������ ��� ������
//��� ����� �������
//�������� ���������, ������� ���������, ����� �� ������ ������� �������� ������ ������.
//
//�������:
//� ������ �� ���������, ��� �������� ��������� ��� ��������, ������� �� ���������
//������ ����������� �������� � ����������� ������������� ���������.
//
//������ �����������, ��� � ��� ���� ��� �������. ���� �������� A � B � C,
//� ������ � M � N � K.
//
//�������� ���������, ������� �� ����� ������ ������ A, B, C, M, N, K ���������, �����
//�� ������ ������� �������� ������ ������.
//
//������� ����� ��� ������ ��������������, �� ���� ������� ������ ���������� � ������
//�������.
//
//������ � ������������
//���� ������� � ������ ������ ���������� �� ���� ��� ����������.
//������������ ������� ���� ��������� �� ����������� ����������.

#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int sideA, sideB, sideC, sideM, sideN, sideK;
	int temp;

	std::cout << "������� ������� ������ ������� A, B, C: ";
	std::cin >> sideA >> sideB >> sideC;

	std::cout << "������� ������� ������ ������ ������� M, N � K: ";
	std::cin >> sideM >> sideN >> sideK;

	// ��������� ������� ������� A, B, C
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

	// ��������� ������� ������ ������� M, N � K
	if(sideM < sideN){
		temp = sideM;
		sideM = sideN;
		sideN = temp;}

	if(sideN < sideK){
		temp = sideN;
		sideN = sideK;
		sideK = temp;}

	if(sideM < sideK){
		temp = sideM;
		sideM = sideK;
		sideK = temp;}

	// ���������� ������� �������
	if(sideA <= sideM && sideB <= sideN && sideC <= sideK)
		std::cout << "������� A, B, C - ����� ��������� ������ ������� M, N, K.\n";
	else
		std::cout << "������� A, B, C - ������ ��������� ������ ������� M, N, K.\n";

	std::cout << "������� A, B, C: " << sideA << "x" << sideB << "x" << sideC << "\n";
	std::cout << "K������ M, N, K: " << sideM << "x" << sideN << "x" << sideK << "\n";

}