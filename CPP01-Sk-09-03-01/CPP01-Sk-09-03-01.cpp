//Задача 1
//На вход программы поступают три символа: две цифры и знак умножения между ними.
//Сначала проверьте, что первый и третий введённые символы являются цифрами, а символ
//между ними — знаком умножения. Затем выведите на экран результат этого умножения.

#include <tchar.h>
#include <iostream>

int main(){
	char num1, op, num2;

	std::cout << "Input expression: \n";

	std::cin >> num1 >> op >> num2;

	if(num1 < '0' || num1 > '9')
		std::cout << "FirstNumber error\n";

	else if (op != '*')
		std::cout << "This is not multiplication\n";

	else if(num2 < '0' || num2 > '9')
		std::cout << "Second number error\n";

	else{
		int result = (num1 - '0') * (num2 - '0');
		std::cout << "Result: " << result << "\n";
	}
}