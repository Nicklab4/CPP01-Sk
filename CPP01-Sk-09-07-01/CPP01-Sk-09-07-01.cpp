//1. ����� � ����
//����� ������������ � AA ����� BB ����� � ��������� � ����� ���������� � CC ����� DD
//�����. ������� ����� � ����� �� ��������� � ����?
//
//�������� ���������, ������� ��������� �� ������������ ��� ������ � ����� �����������
//� ����� �������� ������. ����� ������� ������� �� ���� �������� � ������� HH:MM.
//���������� �������� �����, ��������� �����, ��� ����� ���������.
//
//��������� ������ ��������, ������� ����� � ����� ����� ��������� � ����. ���� �����
//����������� ������ ������� ��������, ��������, ��� ����� ��������� � �����
//���������� �� ��������� ����.
//
//������� ����������
//������� ����� ����������� (HH:MM): 09:20
//������� ����� �������� (HH:MM): 10:20
//������� ��������� 1 �. 0 ���.
//
//������� ����� ����������� (HH:MM): 09:20
//������� ����� �������� (HH:MM): 08:40
//������� ��������� 23 �. 20 ���.
//
//��� �����������
//��������� ��������� ������� � ����� � ������� �����, � ����� ������� � ��������� �� ��������� ����.
//��������� �������� ����� � �� ����� �����, � �� �������� ��������.

#include <tchar.h>
#include <iostream>
#include <string>

int main(){
	std::system("chcp 1251");

	std::string timeStart, timeFinish;
	int hourStart, minutStart, hourFinish, minutFinish, hour, minut, totalStart, totalFinish;
	bool parsing = true;

	hour = 0;
	minut = 0;

	std::cout << "������� ����� ����������� (HH:MM): ";
	std::cin >> timeStart;

	std::cout << "������� ����� �������� (HH:MM): ";
	std::cin >> timeFinish;

	if(timeStart.length() != 5)
		std::cout << "������! ����� ���������� ������ ���� 5 ��������.\n";
	else if(timeFinish.length() != 5)
		std::cout << "������! ����� �������� ������ ���� 5 ��������.\n";
	else {
		for(int i = 0; i < 5; i++)
			if(i == 2 && timeStart[2] != ':'){
				std::cout << "������� ������ ����������� ����� �������.\n";
				parsing = false;
				break;
			}
			else if(timeStart[i] >= '0' && timeStart[i] <= '9');
			else {
				std::cout << "������! ����� �������� �� �������� �������.\n";
				parsing = false;
				break;
			}
	}

	if(parsing){

		hourStart = (timeStart[0] - '0') * 10 + (timeStart[1] - '0');
		minutStart = (timeStart[3] - '0') * 10 + (timeStart[4] - '0');
		hourFinish = (timeFinish[0] - '0') * 10 + (timeFinish[1] - '0');
		minutFinish = (timeFinish[3] - '0') * 10 + (timeFinish[4] - '0');

		if(hourStart < 0 || hourStart > 23){
			std::cout << "������! ������� ������� ���� ������� �����������.\n";
			parsing = false;
		}
		else if(minutStart < 0 || minutStart > 59){
			std::cout << "������! ������� ������� ������ ������� �����������.\n";
			parsing = false;
		}
		else if(hourFinish < 0 || hourFinish > 23){
			std::cout << "������! ������� ������� ���� ������� ��������.\n";
			parsing = false;
		}
		else if(minutFinish < 0 || minutFinish > 59){
			std::cout << "������! ������� ������� ������ ������� ��������.\n";
			parsing = false;
		}
	}

	if(parsing){
		totalStart = hourStart * 60 + minutStart;
		totalFinish = hourFinish * 60 + minutFinish;

		if(totalStart >= totalFinish)
			minut = 24*60 - (totalStart - totalFinish);
		else
			minut = totalFinish - totalStart;

		hour = minut / 60;
		minut -= hour * 60;

		std::cout << "������� ��������� " << hour << " �. " << minut << " ���.\n";
	}
}