#include <stdio.h>

int main(void)
{
	int num;
	printf("1이상 5이하의 정수 입력: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1은 ONE \n");
		break;
	case 2:
		printf("2는 TWO \n");
		break;
	case 3:
		printf("3는 THREE \n");
		break;
	case 4:
		printf("4는 FOUR \n");
		break;
	case 5:
		printf("5는 FIVE \n");
		break;
	default:
		printf("I don't know! \n");
	}
	return 0;
}
