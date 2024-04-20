﻿#include "tasks.h"

/*	Task 02. Min Number [наименьшее число]
 *
 *	Даны четыре целых числа. Определите наименьшее число.
 *
 *	Формат входных данных [input]
 *	На вход функция получает четыре целых числа типа int.
 *
 *	Формат выходных данных [output]
 *	Функция должна возвратить наименьшее из заданных чисел.
 *
 *	[ input 1]: 1 2 3 4
 *	[output 1]: 1
 *
 *	[ input 2]: 7 7 7 7
 *	[output 2]: 7
 *
 *	[ input 3]: -1 -2 -3 -4
 *	[output 3]: -4
 */

int task02(int a, int b, int c, int d) {
	int min = a;
	int numbers[3]{ b,c,d };

	for (int i = 0; i < 3; i++)
	{
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}
	return min;
}