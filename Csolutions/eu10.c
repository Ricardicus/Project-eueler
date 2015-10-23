#include <stdio.h>

int isprime(long x)
{
	long i = 2;
	int b = 1;
	while(i<x)
	{
		if(x%i==0)
		{
			b = 0;
			break;
		}
		i++;
	}
	return b;
}

int main()
{
	long i = 2;
	long sum = 0;
	while(i<2000000)
	{
		if(isprime(i))
		{
			sum += i;
			printf("Prime: %ld, Current sum: %ld\n",i,sum);
		}
		i++;
	}
	printf("\nFinal sum: %ld",sum);
}