#include <stdio.h>
#include <time.h>

int main(void)
{
	// ������ ź�ٰ� ����
	//	�л�, �Ϲ���(20�� �̻�)���� ����

	//int age = 15;
	/*
	int age = 25;

	if (age >= 20)
		printf("�Ϲ��� �Դϴ�.\n");
	else
		printf("�л��Դϴ�.\n");
	*/

	//	�ʵ��л�(8~13), ���л�(~16), ����л�(~19)���� ����

	//int age = 12;
	//int age = 15;
	// int age = 18;
	/*
	int age = 21;

	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("����л��Դϴ�.\n");
	}
	else
	{
		printf("���߰� �л� �ƴ�.\n");
	}
	*/

	// break, continue
	//	1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ
	/*
	for (int i = 1; i <=30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ���� ������.\n");
			break;
		}

		printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
	}
	*/

	//	1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	//	6������ 10������ ���� ��ǥ
	/*
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i<= 10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}

			printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
		}
	}
	*/

	// && ||
	/*
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 12;

	if (a == b || c == d)
	{
		printf("a�� b, Ȥ�� c�� d�� ���� �����ϴ�.\n");
	}
	else
	{
		printf("a�� b, c�� d�� ���� ���� �ٸ��ϴ�.\n");
	}
	*/

	// switch (eg. ���� ���� ��)
	/*
	srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 ��ȯ

//	if (i == 0)
//	{
//		printf("����\n");
//	}
//	else if (i == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("��\n");
//	}

//	switch (i)
//	{
//	case 0: printf("����\n"); break;
//	case 1: printf("����\n"); break;
//	default: printf("��\n");
//	}

	int age = 15;
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("�ʵ��л��Դϴ�.\n"); break;
	case 14:
	case 15:
	case 16: printf("���л��Դϴ�.\n"); break;
	case 17:
	case 18:
	case 19: printf("����л��Դϴ�.\n"); break;
	default: printf("�л��� �ƴմϴ�.\n");
	}
	*/

	// ����
	//	Up & Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 ��ȯ
	printf("���� : %d\n\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ

	while (1) // 1: ��, 0: ����
	{
		printf("���� ��ȸ %d��\n", chance--);
		printf("���ڸ� ���������� (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ��\n\n");
		}
		else if (answer < num)
		{
			printf("UP ��\n\n");
		}
		else
		{
			printf("�����Դϴ� !\n\n");
			break;
		}

		if (chance == 0)
		{
			printf("��ȸ�� ��� ����ϼ̽��ϴ�. \n\n");
			break;
		}
	}

	return 0;
}