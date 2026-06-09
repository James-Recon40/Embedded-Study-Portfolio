/* 인프런 123강 */
/* 주제: 피보나치 예제와 재귀호출의 장단점 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Fibonacci sequence
	1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

	ex) fibonacci(5) = 3 + 2 = fibonacci(4) + fibonacci(3)
*/


int fibonacci(int number);

int main()
{
	for (int count = 1; count < 13; count++)
		printf("%d ", fibonacci(count));

	return 0;
}

int fibonacci(int number)
{
	if (number > 2)
		return fibonacci(number - 1) + fibonacci(number - 2);
	else
		return 1;
}