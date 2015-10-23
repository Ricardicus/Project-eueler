#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXVAL 		1000

struct nbrlst
{
	int data;
	int *next;
};

int*sieve(int);

int main(void)
{
	int * primes = sieve(MAXVAL);

	int a = -MAXVAL+1;
	int b = -MAXVAL+1;

	int i = 2;

	int max_coef_product;
	int max_nbr_of_consecutive_primes = 0;

	int n,f_of_n;

	int cont = 0;

	int maxa;
	int maxb;

	while(a<MAXVAL)
	{
		b = -MAXVAL+1;
		while(b<MAXVAL)
		{
			n = 0;
			cont = 1;
			while(cont)
			{
				f_of_n = pow(n,2) + a*n + b;
				if(f_of_n<0){
					cont = 0;
				}
				else if(primes[f_of_n]){
					if(n>max_nbr_of_consecutive_primes)
					{
						max_nbr_of_consecutive_primes = n;
						max_coef_product = a*b;
						maxa=a;
						maxb=b;
					}
					n++;
				}else{
					cont = 0;
				}
			}
			b++;
		}
		a++;
	}

	printf("max_coef_product: %i\nfor the record, the coefficients were a: %i, b: %i and produced %i consecutive primes..\n", max_coef_product,maxa,maxb,max_nbr_of_consecutive_primes);

	free(primes);
	return 0;
}

int * sieve(int max)
{
	int * nbr = calloc(max+1,sizeof(int));

	int i = 0;
	while(i<=max)
	{
		nbr[i] = 1;
		i++;
	}

	i = 2;

	int p,n; 

	while(i<=max)
	{
		n = 2;
		while(i*n<=max)
		{
			nbr[i*n] = 0;
			n++;
		}
		i++;
	}

	return nbr;
}