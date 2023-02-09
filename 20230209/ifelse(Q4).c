#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	int num3 = num1 > num2 ? (num1 - num2) : (num2 - num1);
	printf("입력 받은 두 값의 차: %d", num3);

	return 0;
}
