#include <stdio.h>

int main(void)
{
	int num1, num2;

	for (num2 = 1; num2 < 10; num2++)
	{
		if (num2 % 2 != 0)
			continue;

		for (num1 = 1; num1 < 10; num1++)
		{
			if (num2 < num1)
				break;
			printf("%d*%d=%d \n", num1, num2, num1 * num2);
		}
		printf("\n");
	}
	return 0;
}

			
		
	
	
	
	
	
	
