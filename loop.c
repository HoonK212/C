#include <stdio.h>

int main_loop(void)
{
	// ����������
	/*
	int a = 10;

	printf("a�� %d\n", a);
	printf("a�� %d\n", a++);
	printf("a�� %d\n\n", a);

	printf("a�� %d\n", a);
	printf("a�� %d\n", ++a);
	printf("a�� %d\n\n", a);

	printf("a�� %d\n", a);
	printf("a�� %d\n", a--);
	printf("a�� %d\n\n", a);

	printf("a�� %d\n", a);
	printf("a�� %d\n", --a);
	printf("a�� %d\n\n", a);
	*/

	// for��
	/*
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}
	*/

	// while��
	/*
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
	}
	*/

	// do while��
	/*
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);
	*/

	// ���� �ݺ��� (������)
	/*
	for (int i = 2; i <= 9; i++)
	{
		
		printf("\n%d�� ���\n", i);

		for (int j = 1; j <= 9; j++)
		{
			printf(" %d x %d = %d\n", i, j, i*j);
		}

	}
	*/

	// ����
	//	�Ƕ�̵� �ױ�
	int floor;
	printf("�� ������ �װڴ���?");
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