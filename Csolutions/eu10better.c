#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long sumprimes(unsigned long maxlimit)
{
	unsigned long *primes = calloc(maxlimit,sizeof(long));
	unsigned long *ptr = primes;
	unsigned long i = 0;
	while(i<maxlimit)
	{
		*ptr = i;
		ptr++;
		i++;
	}
	primes[1] = 0;

	ptr = primes;
	unsigned long step = 2;
	unsigned long x;
	while(step<(unsigned long) sqrt((double)maxlimit))
	{
		x = step+step;
		while(x<maxlimit)
		{
			ptr = x+primes;
			*ptr = 0;
			x += step;
		}
		ptr = primes;
		step++;
	}
	unsigned long sum = 0;
	i = 0;
	while(i<maxlimit-1)
	{
		sum += *ptr;
		ptr++;
		i++;
	}
	free(primes);
	return sum;
}


int main()
{
	long sum = sumprimes(2000000);
	printf("Sum: %ld\n",sum);
}
