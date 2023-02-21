#include <stdio.h>

int main(void)
{
	int num[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++)
	{
		printf("입력: ");
		scanf_s("%d", &num[i]);
	}

	max = min = sum = num[0];
	for (i = 1; i < 5; i++)
	{
		sum += num[i];
		if (max < num[i])
		{
			max = num[i];
		}
		if (min > num[i])
		{
			min = num[i];
		}

	}
	printf("최댓값: %d \n", max);
	printf("최솟값: %d \n", min);
	printf("총 합: %d \n", sum);
	return 0;
}
		


	
