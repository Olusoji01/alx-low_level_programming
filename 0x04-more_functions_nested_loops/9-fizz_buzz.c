#include <stdio.h>
/**
 * main - function to print FizzBuzz
 *
 * Return: it return 0
 */
int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i == 100)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
