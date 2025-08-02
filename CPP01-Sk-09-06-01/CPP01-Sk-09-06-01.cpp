//Задача 1
//Напишите программу, которая принимает от пользователя текст (то есть некоторую
//строку) и ещё слово (то есть ещё строку) и подсчитывает, сколько раз слово
//встречается в тексте. Более точно: сколько в данном тексте существует позиций,
//начиная с которых можно прочитать данное слово.
//
//Замечание. Если вводить строку обычным способом с помощью команды std::cin >> s,
//то С++ проигнорирует все символы после первого пробела, потому что пробел по
//умолчанию считается концом вводимой строки. Чтобы ввести строку с пробелами,
//нужно вместо команды
//std::cin >> s;
//использовать команду
//std::getline(std::cin, s);
//
//Пример ввода:
//mama myla ramu
//my
//Ответ: 1.
//
//Пример ввода:
//abudabudabdab
//dab
//Ответ: 3.

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