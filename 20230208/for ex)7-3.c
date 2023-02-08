	#include <stdio.h>

	int main(void)
	{
		int num1, num2;
		int num3;

		printf("두 개의 정수 입력: ");
		scanf("%d %d", &num1, &num2);

		for(num3=0 ; num1<=num2; num1++)
			num3+=num1;
	
		printf("입력받은 정수 사이 존재하는 값들의 합: %d \n", num3);
		return 0;
	}

