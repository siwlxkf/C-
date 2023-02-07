#include <stdio.h>

int main(void)
{
	int num;
	int dan = 1;
	int i = 3;

	printf("양의 정수 입력: ");
	scanf("%d", &num);

	while (dan < num+1)
	{
		printf("%d*%d=%d \n", dan, i, dan * i);
		dan++;
	}
	return 0;
}
