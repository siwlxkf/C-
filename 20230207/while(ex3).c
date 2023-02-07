#include <stdio.h>

int main(void)
{
	int num;
	int dan = 9;
	printf("양의 정수 입력: ");
	scanf("%d", &num);



	while (dan > 0)
	{
		printf("%d*%d=%d \n", dan, num, dan * num)
			; dan--;
	}
	return 0;
}


