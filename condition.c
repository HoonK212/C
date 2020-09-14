#include <stdio.h>
#include <time.h>

int main(void)
{
	// 버스를 탄다고 가정
	//	학생, 일반인(20세 이상)으로 구분

	//int age = 15;
	/*
	int age = 25;

	if (age >= 20)
		printf("일반인 입니다.\n");
	else
		printf("학생입니다.\n");
	*/

	//	초등학생(8~13), 중학생(~16), 고등학생(~19)으로 구분

	//int age = 12;
	//int age = 15;
	// int age = 18;
	/*
	int age = 21;

	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다.\n");
	}
	else
	{
		printf("초중고 학생 아님.\n");
	}
	*/

	// break, continue
	//	1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표
	/*
	for (int i = 1; i <=30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요.\n");
			break;
		}

		printf("%d번 학생은 조별 발표 준비를 하세요.\n", i);
	}
	*/

	//	1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	//	6번부터 10번까지 조별 발표
	/*
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i<= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다.\n", i);
				continue;
			}

			printf("%d번 학생은 조별 발표 준비를 하세요.\n", i);
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
		printf("a와 b, 혹은 c와 d의 값이 같습니다.\n");
	}
	else
	{
		printf("a와 b, c와 d의 값이 서로 다릅니다.\n");
	}
	*/

	// switch (eg. 가위 바위 보)
	/*
	srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 반환

//	if (i == 0)
//	{
//		printf("가위\n");
//	}
//	else if (i == 1)
//	{
//		printf("바위\n");
//	}
//	else
//	{
//		printf("보\n");
//	}

//	switch (i)
//	{
//	case 0: printf("가위\n"); break;
//	case 1: printf("바위\n"); break;
//	default: printf("보\n");
//	}

	int age = 15;
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("초등학생입니다.\n"); break;
	case 14:
	case 15:
	case 16: printf("중학생입니다.\n"); break;
	case 17:
	case 18:
	case 19: printf("고등학생입니다.\n"); break;
	default: printf("학생이 아닙니다.\n");
	}
	*/

	// 종합
	//	Up & Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 반환
	printf("숫자 : %d\n\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회

	while (1) // 1: 참, 0: 거짓
	{
		printf("남은 기회 %d번\n", chance--);
		printf("숫자를 맞혀보세요 (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ↓\n\n");
		}
		else if (answer < num)
		{
			printf("UP ↑\n\n");
		}
		else
		{
			printf("정답입니다 !\n\n");
			break;
		}

		if (chance == 0)
		{
			printf("기회를 모두 사용하셨습니다. \n\n");
			break;
		}
	}

	return 0;
}