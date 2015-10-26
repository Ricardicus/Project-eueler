#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int investigate(unsigned int,unsigned int);
int is_possible(unsigned int, unsigned int);
int * common_factors_canceled(unsigned int,unsigned int);

int main(void)
{
	unsigned int non_trivial_nominators[100];
	unsigned int non_trivial_denominators[100];
	int nbr_index = 0;

	unsigned int nominator = 10;
	unsigned int denominator = 10;
	while(denominator<100)
	{
		nominator=11;
		while(nominator<100)
		{
			if(investigate(nominator,denominator))
			{
				non_trivial_nominators[nbr_index] = nominator;
				non_trivial_denominators[nbr_index] = denominator;
				if(nbr_index<4)
				{
					nbr_index++;
				}
			}
			nominator++;
		}
		denominator++;
	}

	unsigned int nominator_product = 1;
	unsigned int denominator_product = 1;
	int n = 0;
	while(n<nbr_index)
	{
		nominator_product *= non_trivial_nominators[n];
		denominator_product *= non_trivial_denominators[n];
		n++;
	}

	int * no_de_pair = common_factors_canceled(nominator_product,denominator_product); 
	printf("denominator is: %u\n",no_de_pair[1]);
	free(no_de_pair);

	return EXIT_SUCCESS;
}

int * common_factors_canceled(unsigned int nominator,unsigned int denominator)
{
	int * no_de_pair = calloc(2,sizeof(int));
	unsigned int i = 2;
	unsigned int min = nominator;

	if(denominator < min)
	{
		min = denominator;
	}
	while(i<=min)
	{
		if(nominator%i == 0 && denominator%i==0)
		{
			nominator/=i;
			denominator/=i;
			min/=i;
		}
		else
		{
			i++;
		}
	}

	no_de_pair[0] = nominator;
	no_de_pair[1] = denominator;

	return no_de_pair;
}

int is_possible(unsigned int nominator, unsigned int denominator)
{
	unsigned int first = nominator%10;
	unsigned int second = denominator;
	int n = 0;
	while(n<2)
	{
		if(first == second/10)
		{
			return 1;
		}
		else if(first == second%10)
		{
			return 1;
		}
		first = nominator/10;
		n++;
	}
	return 0;
}

int investigate(unsigned int nominator, unsigned denominator)
{	
	if(is_possible(nominator,denominator) && nominator!=denominator && nominator%10 != 0 && denominator%10 != 0)
	{
		unsigned int test_nominator = nominator%10;
		unsigned int test_denominator = 1;

		int ok = 0;
		if(denominator%10 == test_nominator)
		{
			test_denominator *= denominator/10;
			ok = 1;
		} 
		else if(denominator/10 == test_nominator)
		{
			test_denominator *= denominator%10;
			ok = 1;
		}
		test_nominator = nominator/10;
		if(!ok)
		{
			if(denominator%10 == test_nominator)
			{
				test_denominator *= denominator/10;
			} 
			else if(denominator/10 == test_nominator)
			{
				test_denominator *= denominator%10;
			}
			test_nominator = nominator%10;
		}
		
			float test_real_frac = nominator / (float) denominator;
			float test_curious_frac =  test_nominator/ (float) test_denominator;
			if(fabs(test_real_frac - test_curious_frac)<0.0000001 && fabs(test_real_frac) <= 1 && fabs(test_curious_frac) <= 1)		
			{
				return 1;
			}
		
	}
	return 0;
}