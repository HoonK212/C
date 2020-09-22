#include<stdio.h>

// 선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int n1, int n2, int n3);
int apple(int total, int ate);
int add(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int div(int n1, int n2);

int main_function(void)
{
	// function
	//	계산기
	/*
	int num = 2;
	// printf("num은 $d 입니다.\n", num); // 2
	p(num);

	// 2 + 3 은?
	num = num + 3;
	// printf("num은 %d 입니다.\n", num); // 5
	p(num);

	// 5 - 1 은?
	num -= 1; // num = num -1;
	// printf("num은 %d 입니다.\n", num); // 4
	p(num);

	// 4 x 3 은?
	num *= 3;
	// printf("num은 %d 입니다.\n", num); // 12
	p(num);

	// 12 / 6 은?
	num /= 6;
	// printf("num은 %d 입니다.\n", num); // 2
	p(num);
	*/

	// 함수 종류
	//	반환값이 없는 함수
	// function_without_return();

	//	반환값이 있는 함수
	// int res = function_with_return();
	// p(res);

	//	파라미터가 없는 함수
	// function_without_params();

	//	파라미터가 있는 함수
	// function_with_params(1, 2, 3);

	//	파라미터와 반환값이 모두 존재하는 함수
	// int res = apple(5, 2); // 5개의 사과 중에서 2개를 먹음
	// p(res);
	// printf("사과 %d 개 중에 %d 개를 먹으면? %d 개가 남아요\n", 10, 4, apple(10, 4));

	// 계산기 함수
	/*
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);
	*/

	return 0;
}

// 정의
void p(int num)
{
	printf("num은 %d 입니다.\n", num);
}

void function_without_return()
{
	printf("반환값이 없는 함수입니다.");
}

int function_with_return()
{
	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수입니다.");
}

void function_with_params(int n1, int n2, int n3)
{
	printf("전달값이 있는 함수입니다. 전달받은 값은 %d, %d, %d 입니다.", n1, n2, n3);
}

int apple(int total, int ate)
{
	return total - ate;
}

int add(int n1, int n2)
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	return n1 - n2;
}

int mul(int n1, int n2)
{
	return n1 * n2;
}

int div(int n1, int n2)
{
	return n1 / n2;
}