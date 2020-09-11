#include <stdio.h>
int main_printfscanf(void)
{
	// 정수형 변수
	/*
	int age = 21;
	printf("%d\n", age);
	age = 28;
	printf("%d\n", age);
	*/
	
	// 실수형 변수
	/*
	float f = 46.5;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);
	*/
	
	// 상수
	/*
	const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);
//	YEAR = 2001; -> 수정 불가능
	*/

	// printf
	//	연산
	/*
	int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 30, 79, 30 * 79);
	*/

	// scanf
	//	키보드 입력을 받아서 저장
	/*
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);
	
	//	문자
	char c = 'A';
	printf("%c\n", c);

	//	문자열
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
	*/

	// 종합
	//	이름? 나이? 키? 몸무게?
	char name[256];
	printf("이름 : ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이 : ");
	scanf_s("%d", &age);

	double height;
	printf("키 : ");
	scanf_s("%lf", &height);

	float weight;
	printf("몸무게 : ");
	scanf_s("%f", &weight);

	printf("\n--- 출력 ---\n > 이름 : %s\n > 나이 : %d\n > 키 : %.2lf\n > 몸무게 : %.2f\n", name, age, height, weight);

	return 0;
}