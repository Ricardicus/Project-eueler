#include <stdio.h>
#include <stdlib.h>

int getnbrofdivisors(unsigned long x);
int getnbrofdivisors2(unsigned long x);

unsigned long sum(long x);

int main()
{
	long overtop = 500;
	long top = 20000;
	long max = 0;

	unsigned long potentialnbr;
	int numberofdivisors;
	int maxdivisors = 0;
	unsigned long i = 1;
	while(i<top)
	{
		potentialnbr = sum(i);
		numberofdivisors = getnbrofdivisors(potentialnbr);
		if(numberofdivisors>overtop)
		{
			printf("We have a winner. The number is: %ld\n",potentialnbr);
			break;
		}
		else if(numberofdivisors>maxdivisors)
		{
			maxdivisors=numberofdivisors;
		}
		printf("Triangle number: %ld, had %i divisors.\nCurrent maximum divisors is: %i\n",potentialnbr,numberofdivisors,maxdivisors);
		i++;
	}
	return 0;
}

int getnbrofdivisors(unsigned long x)
{
	unsigned long i = 1;
	int sum = 0;
	while(i<x)
	{
		if(x%i==0)
		{
			sum++;
		}
		i++;
	}
	return sum;
}

unsigned long sum(long i)
{
	unsigned long n = 1;
	unsigned long sum = 0;
	while(n<i+1)
	{
		sum += n;
		n++;
	}
	return sum;
}