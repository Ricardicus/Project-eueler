#include <stdio.h>

long collatz(long long n, long i);

int main()
{
	long long i = 1;
	long max = 0;
	long p;
	long long maxnumber;
	while(i<1000000)
	{
		p = collatz(i,1);
		if(p>max)
		{
			max = p;
			maxnumber = i; 
		}
		/*printf("Process completed: %lld percent. \n", i/10000);*/
		i++;
	}
	printf("Longest chain has %ld terms and is: %lld\n",max,maxnumber);
	return 0;
}

long collatz(long long n, long i)
{

		if(n%2==0)
		{
			return collatz(n/2,i+1);
		}	
		else if(n == 1)
		{
			return i;
		}
		else
		{
			return collatz(3*n+1,i+1);
		}
}