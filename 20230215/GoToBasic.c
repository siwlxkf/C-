#include <stdio.h>

int main(void)
{
	int num;
	printf("자연수 입력: ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1을 입력하셨습니다! \n");
	goto End;
TWO:
	printf("2을 입력하셨습니다! \n");
	goto End;
OTHER:
	printf("3 혹은 다른 값을 입력하셨군요! \n");

End:
	return 0;
}
