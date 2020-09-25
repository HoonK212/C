#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int n1, int n2);
void success();
void fail();

int main_function_project(void)
{
	// ���� 5���� �ְ�, �� ������ ���� ����� ���� ��� ���� (����)
	// ������ ���, Ʋ���� ����

	srand(time(NULL));
	int count = 0;

	for (int i = 1; i <= 5; i++)
	{
		// x * y = ?
		int n1 = getRandomNumber(i);
		int n2 = getRandomNumber(i);
		showQuestion(i, n1, n2);
		
		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("���α׷��� �����մϴ�.\n");
			exit();
		}
		else if (answer == n1 * n2)
		{
			// ����
			success();
			count++;
		}
		else
		{
			// ����
			fail();
		}
	}

	printf("\n\n ����� 5���� ��й�ȣ �� %d ���� ������ϴ�.", count);

	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int n1, int n2)
{
	printf("\n\n\n##### %d ��° ��й�ȣ #####\n", level);
	printf("\n\t%d x %d ��?\n\n", n1, n2);
	printf("##### ##### #####\n");
	printf("\n��й�ȣ�� �Է��ϼ��� (���� : -1) >> ");
}

void success()
{
	printf("\n >> �����Դϴ� ��\n");
}

void fail()
{
	printf("\n >> �����Դϴ� ��\n");
}