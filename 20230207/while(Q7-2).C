#include <stdio.h>

int main(void)
{
	int num = 0;
	int dan = 0;

	while (num<5)
	{
		while (dan < num)
		{
			printf("0");
			dan++;
		}
		
		dan = 0;
		printf("* \n");
		num++;
	}
	return 0;
}

	

