#include <stdio.h>

int main_loop(void)
{
	// 증감연산자
	/*
	int a = 10;

	printf("a는 %d\n", a);
	printf("a는 %d\n", a++);
	printf("a는 %d\n\n", a);

	printf("a는 %d\n", a);
	printf("a는 %d\n", ++a);
	printf("a는 %d\n\n", a);

	printf("a는 %d\n", a);
	printf("a는 %d\n", a--);
	printf("a는 %d\n\n", a);

	printf("a는 %d\n", a);
	printf("a는 %d\n", --a);
	printf("a는 %d\n\n", a);
	*/

	// for문
	/*
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}
	*/

	// while문
	/*
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
	}
	*/

	// do while문
	/*
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);
	*/

	// 이중 반복문 (구구단)
	/*
	for (int i = 2; i <= 9; i++)
	{
		
		printf("\n%d단 계산\n", i);

		for (int j = 1; j <= 9; j++)
		{
			printf(" %d x %d = %d\n", i, j, i*j);
		}

	}
	*/

	// 종합
	//	피라미드 쌓기
	int floor;
	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++)
	{

		for (int j = i; j < floor-1; j++)
		{
			printf(" ");
		}

		for (int k = 0; k < 2*i+1; k++)
		{
			printf("*");
		}

		printf("\n");

	}

	return 0;
}