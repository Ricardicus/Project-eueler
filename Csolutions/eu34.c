#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int sum_factorial_digits(int);

int main(void)
{
	int i = 1000000;
	unsigned int sum = 0;
	while(i>=10)
	{
		if(i==sum_factorial_digits(i))
		{
			sum+=i;
		}
		i--;
	}

	printf("%u\n",sum);

	return EXIT_SUCCESS;
}

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	return factorial(n-1)*n;
}

int sum_factorial_digits(int x)
{
	int sum = 0;
	while(x>=1)
	{
		sum+=factorial(x%10);
		x/=10;
	}
	return sum;

}