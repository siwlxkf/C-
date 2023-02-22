#include <stdio.h>

int main(void)
{
	char arm[50];
	int num = 0, i;
	char armst;

	printf("영단어 입력: ");
	scanf("%s", arm);

	while (arm[num] != '\0')
		num++;

	for (i = 0; i < num / 2; i++)
	{
		armst = arm[i];
		arm[i] = arm[(num - i) - 1];
		arm[(num - i) - 1] = armst;
	}
	printf("뒤집힌 영단어: %s \n", arm);
	return 0;
}

