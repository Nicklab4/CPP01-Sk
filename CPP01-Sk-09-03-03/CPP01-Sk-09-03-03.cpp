//Задача 3 (повышенной сложности)
//Вновь клетки на шахматной доске. На этот раз вы хотите проверить, может ли шахматная
//фигура за один ход перейти с одной из клеток на другую. Пользователь вводит
//координаты двух клеток на шахматной доске. Программа должна ответить на пять
//вопросов: соединены ли данные две клетки ходом коня, слона, ладьи, ферзя, короля?
//
//Напомним, что конь за один ход перемещается на две клетки в одном направлении и на
//одну — под углом 90° к этому направлению. Ладья ходит по горизонтали или по
//вертикали (но не по диагонали) на любое количество клеток. Слон — тоже на любое
//количество клеток, но только по диагонали. Ферзь может ходить как ладья и как слон.
//Король может за один ход переместиться в любом направлении, но только на одну клетку.

#include <tchar.h>
#include <iostream>
#include <string>

int main() {
	std::string start, move;

	std::cout << "Input start position and move position:\n";
	std::cin >> start >> move;

	if( (   abs(start[0] - move[0]) == 1) && (abs(start[1] - move[1]) == 2)
		|| (abs(start[0] - move[0]) == 2) && (abs(start[1] - move[1]) == 1))
		std::cout << "Horse move\n";

	if(     abs((start[0] - move[0]) == 0) && (abs(start[1] - move[1]) > 0)
		|| (abs(start[0] - move[0]) > 0) && (abs(start[1] - move[1]) == 0)
		)
		std::cout << "Rook move\n";

	if( (   abs(start[0] - move[0]) == abs(start[1] - move[1]))
		&& (abs(start[0] - move[0]) > 0))
		std::cout << "Bishop move\n";

	if((
		(   abs(start[0] - move[0]) == abs(start[1] - move[1]))
		&& (abs(start[0] - move[0]) > 0))
		||
		(   abs((start[0] - move[0]) == 0)
		&& (abs(start[1] - move[1]) > 0)
		||
		(   abs(start[0] - move[0]) > 0)
		&& (abs(start[1] - move[1]) == 0)))
		std::cout << "Queen move\n";

	if( (  abs(start[0] - move[0]) <= 1
		&& abs(start[1] - move[1]) <= 1))
		std::cout << "King move\n";

}
