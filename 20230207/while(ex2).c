#include <stdio.h>

int main(void)
{
	int total = 0;
	int num = 1;

	while (num != 0)
	{
		printf("정수 입력: ");
		scanf("%d", &num);
		total += num;
	}

	printf("입력된 정수의 총 합: %d \n", total);
	return 0;
}

