#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int n1, int n2);
void success();
void fail();

int main_function_project(void)
{
	// 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제 (랜덤)
	// 맞히면 통과, 틀리면 실패

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
			printf("프로그램을 종료합니다.\n");
			exit();
		}
		else if (answer == n1 * n2)
		{
			// 성공
			success();
			count++;
		}
		else
		{
			// 실패
			fail();
		}
	}

	printf("\n\n 당신은 5개의 비밀번호 중 %d 개를 맞췄습니다.", count);

	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int n1, int n2)
{
	printf("\n\n\n##### %d 번째 비밀번호 #####\n", level);
	printf("\n\t%d x %d 는?\n\n", n1, n2);
	printf("##### ##### #####\n");
	printf("\n비밀번호를 입력하세요 (종료 : -1) >> ");
}

void success()
{
	printf("\n >> 정답입니다 ㅎ\n");
}

void fail()
{
	printf("\n >> 오답입니다 ㅠ\n");
}