#include <stdio.h>

int main(void)
{
	char arm[20];
	int num = 0, i;
	char temp;

	printf("영단어 입력: \n");
	scanf("%s", arm);

	while (arm[num] != 0)
		num++;
	printf("입력한 영단어의 길이는 %d \n", num);
	return 0;
}
