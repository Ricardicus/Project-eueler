#include <stdio.h>
#include <stdlib.h>

int main(void)
{
#if 0
Horrible brute force solution
#endif
	int p  = 1000;
	int max = -1;
	int max_solutions = -1;
	int perimiters[p];
	int i = 0;
	while(i<p)
	{
		perimiters[i] = 0;
		i++;
	}
	p = 1000;
	while(p>=3)
	{
		int solutions = 0;
		for(int a = 1; a<=p;a++)
		{
			for(int b = a; b<=p-a;b++)
			{
				for(int c = 1; c<=p-a-b;c++)
				{
					if(a+b+c==p)
					{
						if(a*a+b*b==c*c)
						{
							solutions++;
						}
					}
				}
			}
		}
		if(solutions > max)
		{
			max = solutions;
			max_solutions = p;
		}
		p--;
	}
	printf("the perimiter, p, that gives the maximum solutions in the interval p<=1000 is: %d (%d solutions)\n",max_solutions,max);
	return EXIT_SUCCESS;
}