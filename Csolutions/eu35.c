#include <stdio.h>
#include <stdlib.h>

typedef enum boolean {
	false=0,
	true=1
} boolean;

boolean is_prime(unsigned int);
boolean is_circular(unsigned int,unsigned int*);
int length(unsigned int);
int shift(unsigned int,int);

int main(void)
{

	int nbr_of_primes = 10000000;
	unsigned int * primes = calloc(nbr_of_primes,sizeof(int));

	int i = 2;

	while(i<nbr_of_primes)
	{
		primes[i] = 1;
		i++;
	}

	i = 2;

	while(i<nbr_of_primes)
	{
		int r = i+i;
		while(r<nbr_of_primes)
		{
			primes[r] = 0;
			r += i;
		}
		i++;
	}

	int n = 1000000;
	int p = n;
	int nbr_circular_primes = 0;
	while(n>=2)
	{
		if(primes[n])
		{
			if(is_circular(n,primes))
			{
				nbr_circular_primes++;
			}
		}
		n--;
	}

	printf("there are %i circular primes under %i \n",nbr_circular_primes,p);

	return EXIT_SUCCESS;
}

int length(unsigned int x)
{
	int length = 0;
	while(x>=1)
	{
		x/=10;
		length++;
	}
	return length;
}

boolean is_prime(unsigned int x)
{
	unsigned int i = 2;
	while(i<x)
	{
		if(x%i == 0)
		{
			return false;
		}
		i++;
	}
	return true;
}

int shift(unsigned int x,int length)
{
	unsigned int l = length-1;
	int million = 1000000;
	unsigned int n = 1;
	while(l>=1)
	{
		n*=10;
		l--;
	}
	unsigned int p = x/n;
	unsigned int shifted = million+(x*10)%(n*10)+p;
	return shifted;
}

boolean is_circular(unsigned int x,unsigned int * primes)
{
	int len = length(x);
	int shifts = len;
	int million = 1000000;
	int res = x+million;
	
	while(shifts>0)
	{
		shifts--;
		if(!primes[res%million])
		{
			return false;
		}
		else if(!is_prime(res%million))
		{
			return false;
		}
		res = shift(res-million,len);
	}
	return true;
}

