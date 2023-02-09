#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result;

	printf("두 개의 정수 입력:   ");
	scanf_s("%d %d", &num1, &num2);

	if (num2 > num1)
	{
		result = num2 - num1;
		printf("결과: %d", result);
	}
	else
	{
		result = num1 - num2;
		printf("결과: %d", result);
	}

	return 0;
}

