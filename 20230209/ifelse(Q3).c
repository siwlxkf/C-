#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	double result;

	printf("국어, 수학, 영어 점수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = (num1 + num2 + num3) / 3.0;
	printf("전체 평균점수:%f \n", result);

	if (result >= 90)
		printf("전체 평균점수에 대한 학점:A");
	else if (result >= 80)
		printf("전체 평균점수에 대한 학점:B");
	else if (result >= 70)
		printf("전체 평균점수에 대한 학점:C");
	else if (result >= 50)
		printf("전체 평균점수에 대한 학점:D");
	else
		printf("전체 평균점수에 대한 학점:F");

	return 0;
}
