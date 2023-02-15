#include <stdio.h>

int main(void)
{
	int num;
	printf("숫자 입력: ");
	scanf_s("%d", &num);

	if (0 <= num && num < 10)
		printf("0이상 10미만");

	else if (10 <= num && num < 20)
		printf("10이상 20미만");

	else if (20 <= num && num < 30)
		printf("20이상 30미만");

	else
		printf("30이상");
}





#include <stdio.h>

int main(void)
{
	int num;
	printf("숫자 입력: ");
	scanf_s("%d", &num);

	switch (num / 10)
	{
	case 0:
		printf("0이상 10 미만 \n");
		break;
	case 1:
		printf("10이상 20미만 \n");
		break;
	case 2:
		printf("20이상 30미만 \n");
		break;
	default:
		printf("30이상 \n");
	}
	return 0;
}
