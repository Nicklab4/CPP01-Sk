//������� 6. ������� ��������
//
//������� ������ ��� �������� �� ����� 4.3? ������, ������ �������� % ��� ������
//��� � ���������. ���������� ��������� ��� ��� � ��� �������������� ��� ��������
//�� �������� � ������������� ��������.
//
//�������� ���������, ������� �������� �� ������ ������� �� �������� � ������
//������ ���� ������ ����� ����� � ����� ��������, � ��� �� �������, ���
//���� ������ �������� 8 ����� � ����, �� ������ ������� ������ 1 ���
//� ������ ������ �������� ��� � �����. �������������� ��� ������� ��������
//�������������� ������� ���������� %


#include <tchar.h>
#include <iostream>

int main() {
	std::system("chcp 1251");

	int manQuantity;
	int barberQuantity;
	int barberCurentQuantity;
	int barberNeeds;

	std::cout << "������� ����� ������ ����������� � ������: ";
	std::cin >> manQuantity;

	std::cout << "������� ����� ��� ��������������� ��������: ";
	std::cin >> barberCurentQuantity;

	barberQuantity = (manQuantity / 30) / 8;

	if(manQuantity % (barberQuantity * 8 * 30) > 0)
		barberQuantity += 1;

	std::cout << barberQuantity << " �������� ������ ��������� " << barberQuantity * 8 * 30 << " ������.\n";

	if(barberCurentQuantity >= barberQuantity)
		std::cout << "�������� ��� ����������.\n";

	if(barberCurentQuantity < barberQuantity)
	{
		barberNeeds = barberQuantity - barberCurentQuantity;
		std::cout << "�������� ������������.\n��������� ��� " << barberNeeds << " ��������.\n";
	}
}