#include <stdio.h>
int main_printfscanf(void)
{
	// ������ ����
	/*
	int age = 21;
	printf("%d\n", age);
	age = 28;
	printf("%d\n", age);
	*/
	
	// �Ǽ��� ����
	/*
	float f = 46.5;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);
	*/
	
	// ���
	/*
	const int YEAR = 2000;
	printf("�¾ �⵵ : %d\n", YEAR);
//	YEAR = 2001; -> ���� �Ұ���
	*/

	// printf
	//	����
	/*
	int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 30, 79, 30 * 79);
	*/

	// scanf
	//	Ű���� �Է��� �޾Ƽ� ����
	/*
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);

	int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);
	
	//	����
	char c = 'A';
	printf("%c\n", c);

	//	���ڿ�
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
	*/

	// ����
	//	�̸�? ����? Ű? ������?
	char name[256];
	printf("�̸� : ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("���� : ");
	scanf_s("%d", &age);

	double height;
	printf("Ű : ");
	scanf_s("%lf", &height);

	float weight;
	printf("������ : ");
	scanf_s("%f", &weight);

	printf("\n--- ��� ---\n > �̸� : %s\n > ���� : %d\n > Ű : %.2lf\n > ������ : %.2f\n", name, age, height, weight);

	return 0;
}