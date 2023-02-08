#include <stdio.h>

int main(void)
{
	int num=1, num1, num2;

	printf("정수 입력: ");
	scanf("%d", &num);

	for(num2=1; num>0; num--)
	{
		num2=num*num2;
	}
	
	printf("입력한 정수의 펙토리얼: %d \n", num2);
	return 0;
}



