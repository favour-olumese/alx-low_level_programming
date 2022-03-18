#include <stdio.h>

/**
 * main - 1 to 100, 3x replaced with Fizz, 5x replaced with Buzz, 3x and 5x replaced with FizzBuzz
 * Return: Void.
 */
int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else 
		{
			printf("%d ", num);
		}
	}
	
	return (0);
}