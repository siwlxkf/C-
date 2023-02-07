#include <stdio.h>

int main(void)
{
	int num = 0;
	int dan;
	int total = 0;

	while (num < 5)
	{
		printf("정수 입력: ");
		scanf("%d", &dan);


		while (dan <= 0)
		{
			printf("0보다 큰 수를 입력하시오: ");
			scanf("%d", &dan);
		}
		
		total += dan;
		num++;
	}
	printf("입력받은 값들의 합: %d", total);
	return 0;
}

	

