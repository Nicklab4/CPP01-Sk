//������ 1
//�������� ���������, ������� ��������� �� ������������ ����� (�� ���� ���������
//������) � ��� ����� (�� ���� ��� ������) � ������������, ������� ��� �����
//����������� � ������. ����� �����: ������� � ������ ������ ���������� �������,
//������� � ������� ����� ��������� ������ �����.
//
//���������. ���� ������� ������ ������� �������� � ������� ������� std::cin >> s,
//�� �++ ������������� ��� ������� ����� ������� �������, ������ ��� ������ ��
//��������� ��������� ������ �������� ������. ����� ������ ������ � ���������,
//����� ������ �������
//std::cin >> s;
//������������ �������
//std::getline(std::cin, s);
//
//������ �����:
//mama myla ramu
//my
//�����: 1.
//
//������ �����:
//abudabudabdab
//dab
//�����: 3.

#include <tchar.h>
#include <iostream>
#include <string>

int main() {
	std::string str, find;

	std::cout << "Input string:\n";
	std::getline(std::cin, str);
	std::cout << "Input finding string:\n";
	std::getline(std::cin, find);

	int count = 0 ;

	if(str.length() < find.length() )
		std::cout << "Error";
	else{

		for(int i = 0; i <= str.length() - find.length(); i++)
			for(int j = 0; j < find.length(); j++)
				if(str[i+j] != find[j]){
					break;
				}
				else if((j == find.length() -1) && (str[i+find.length()-1] == find[find.length()-1])){
					count++;
				}
	}

	std::cout << "Answer: " << count << "\n";
}