#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double change(int a);

int main()
{
	double inch;
	printf("��ġ�� �Է��ϼ���: ");
	scanf("%lf", &inch);
	printf("%f��ġ�� %.2fcm�Դϴ�.\n", inch, change(inch));

	return 0;
}

double change(int a)
{
	double cm;
	cm = (a * 2.54);
	return (cm);
}