//������ 2 (���������� ���������)
//�������� ���������, ������� �� ���� ��������� ������ ����������, ����� �� ��� ����
//������. ����� ������������ ��������� 6, 7, 8, 9, 0 (��� ����� ���������� �������),
//J (�����), Q (����), K (������), A (���). ������������ ������ ��� ������� ��
//�����������������. ��������� ������ ��������, ����� ����� ������: First, ����
//������, Second, ���� ������, � Equal, ���� ����� ���� �����������. �� ���������,
//��� ������� ���� ����!

#include <tchar.h>
#include <iostream>

int main() {
	char first, second;

	std::cout << "Input two cards:\n";
	std::cin >> first >> second;

	if(first == second)
		std::cout << "Equal\n";

	else {
		int firstCardValue = 0;

		if(first >= '6' && first <= '9')
			firstCardValue = first - '0';

		else if(first == '0')
			firstCardValue = 10;

		else if(first == 'J')
			firstCardValue = 11;

		else if(first == 'Q')
			firstCardValue = 12;

		else if(first == 'K')
			firstCardValue = 13;


		int secondCardValue = 0;

		if(second >= '6' && second <= '9')
			secondCardValue = second - '0';

		else if(second == '0')
			secondCardValue = 10;

		else if(second == 'J')
			secondCardValue = 11;

		else if(second == 'Q')
			secondCardValue = 12;

		else if(second == 'K')
			secondCardValue = 13;


		if((first == 'A' && second != '6')
			|| (firstCardValue > secondCardValue))
			std::cout << "First\n";

		else
			std::cout << "Second\n";
	}
}