//������ 1. ��� ����
//� ������ ���������� ���������� �������������� ���������� ����� ����� ������. ��
//�������� ������������ ����������� ���� � ������ ����� ��������� ������ ����������,
//����� �� ���� ������ � ��� �����. ����������� ��� ����� ������ ����������� if �
//���������� ����������. ���������� �������� �����. 
//
//������
//����:
//������� �������������� ����:
//0.071;
//0.118.
//������� �������������� ����� �� �����:
//0.213;
//0.068.
//
//�����:
//���� � ������ (0, 1). ����� � ������ (2, 0).
//��, ���� ����� ������ � ��� �����.

#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");
	float xStart, yStart, xEnd, yEnd;

	std::cout << "����:\n";
	std::cout << "������� �������������� ����: \n";

	while(true){
		std::cin >> xStart;

		if(xStart < 0 || xStart >= 0.8f)
			std::cout << "���������� ������ ���� � ���������� �� 0 �� 0.7999\n";
		else{
			xStart = (int)(xStart * 10);
			break;
		}
	}

	while(true){
		std::cin >> yStart;

		if(yStart < 0 || yStart >= 0.8f)
			std::cout << "���������� ������ ���� � ���������� �� 0 �� 0.7999\n";
		else{
			yStart = (int)(yStart * 10);
			break;
		}
	}

		std::cout << "������� �������������� ����� �� �����: \n";

	while(true){
		std::cin >> xEnd;

		if(xEnd < 0 || xEnd >= 0.8f)
			std::cout << "���������� ������ ���� � ���������� �� 0 �� 0.7999\n";
		else{
			xEnd = (int)(xEnd * 10);
			break;
		}
	}

	while(true){
		std::cin >> yEnd;

		if(yEnd < 0 || yEnd >= 0.8f)
			std::cout << "���������� ������ ���� � ���������� �� 0 �� 0.7999\n";
		else{
			yEnd = (int)(yEnd * 10);
			break;
		}
	}

	std::cout << "�����:\n";
	std::cout << "���� � ������ (" << xStart << ", " << yStart <<
			"). ����� � ������ (" << xEnd << ", " << yEnd << ").\n";


	if( (xEnd == xStart + 2 && yEnd == yStart - 1) ||
		(xEnd == xStart + 2 && yEnd == yStart + 1) ||
		(xEnd == xStart - 2 && yEnd == yStart - 1) ||
		(xEnd == xStart - 2 && yEnd == yStart + 1) ||
		(xEnd == xStart - 1 && yEnd == yStart + 2) ||
		(xEnd == xStart + 1 && yEnd == yStart + 2) ||
		(xEnd == xStart - 1 && yEnd == yStart - 2) ||
		(xEnd == xStart + 1 && yEnd == yStart - 2))
		std::cout << "��, ���� ����� ������ � ��� �����.\n";
	else
		std::cout << "���, ���� ������� ������ � ��� �����.\n";
}