#include "main"

int main(void)
{
	long i;
	long j;

	long prime[20];
	j = 0;

	for (i = 2; i < 612852475143/2; i++)
	{
		if (612852475143 % i == 0)
		{
			prime[j] = i;
			j++;
		}
	}

	printf("%d\n", prime[j]);

	return (0);
}
