#include<stdio.h>

// ����
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
	//	����
	/*
	int num = 2;
	// printf("num�� $d �Դϴ�.\n", num); // 2
	p(num);

	// 2 + 3 ��?
	num = num + 3;
	// printf("num�� %d �Դϴ�.\n", num); // 5
	p(num);

	// 5 - 1 ��?
	num -= 1; // num = num -1;
	// printf("num�� %d �Դϴ�.\n", num); // 4
	p(num);

	// 4 x 3 ��?
	num *= 3;
	// printf("num�� %d �Դϴ�.\n", num); // 12
	p(num);

	// 12 / 6 ��?
	num /= 6;
	// printf("num�� %d �Դϴ�.\n", num); // 2
	p(num);
	*/

	// �Լ� ����
	//	��ȯ���� ���� �Լ�
	// function_without_return();

	//	��ȯ���� �ִ� �Լ�
	// int res = function_with_return();
	// p(res);

	//	�Ķ���Ͱ� ���� �Լ�
	// function_without_params();

	//	�Ķ���Ͱ� �ִ� �Լ�
	// function_with_params(1, 2, 3);

	//	�Ķ���Ϳ� ��ȯ���� ��� �����ϴ� �Լ�
	// int res = apple(5, 2); // 5���� ��� �߿��� 2���� ����
	// p(res);
	// printf("��� %d �� �߿� %d ���� ������? %d ���� ���ƿ�\n", 10, 4, apple(10, 4));

	// ���� �Լ�
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

// ����
void p(int num)
{
	printf("num�� %d �Դϴ�.\n", num);
}

void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.");
}

int function_with_return()
{
	return 10;
}

void function_without_params()
{
	printf("���ް��� ���� �Լ��Դϴ�.");
}

void function_with_params(int n1, int n2, int n3)
{
	printf("���ް��� �ִ� �Լ��Դϴ�. ���޹��� ���� %d, %d, %d �Դϴ�.", n1, n2, n3);
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