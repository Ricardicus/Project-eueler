#include <stdio.h>
#include <stdlib.h>

#define false		0
#define true 		1

unsigned int together(unsigned int,unsigned int,unsigned int);
int has_no_duplicates(unsigned int);
int has_zeros(unsigned int);
int length_int(unsigned int);


int main(void)
{

	unsigned int sum = 0;
	unsigned int product = 9999;

	unsigned int m1;
	unsigned int m2;

	unsigned int investigate;
	unsigned int cont = true; 

	while(product>1111)
	{
		cont = true;
		m1 = 2;
		while(m1<100 && cont)
		{
			if(product%m1==0)
			{
				m2 = product/m1;
				investigate = together(m1,m2,product);
				if(has_no_duplicates(investigate) && !has_zeros(investigate) && length_int(investigate) == 9)
				{
					sum+=product;
					cont = false;
				}
			}
			m1++;
		}
		product--;
	}

	printf("resulting product sum: %u\n",sum);
	return EXIT_SUCCESS;
}

int length_int(unsigned int x)
{
	int len = 0;
	while(x>=1)
	{
		len++;
		x/=10;
	}
	return len;
}

unsigned int together(unsigned int x1,unsigned int x2,unsigned int x3)
{
	int len = length_int(x1);
	len+=length_int(x2);
	len+=length_int(x3);

	if(len>9)
	{
		return false;
	}

	unsigned int res = 0;
	while(x1>=1)
	{	
		res *= 10;
		res += x1%10;
		x1/=10;
	}
	while(x2>=1)
	{	
		res *= 10;
		res += x2%10;
		x2/=10;
	}
	while(x3>=1)
	{	
		res *= 10;
		res += x3%10;
		x3/=10;
	}

	return res;

}

int has_no_duplicates(unsigned int x)
{
	int digits[10];
	int i = 0;
	while(i<10)
	{
		digits[i] = 0;
		i++;
	}
	while(x>=1)
	{
		if(digits[x%10])
		{
			return false;
		}
		digits[x%10] = 1;
		x/=10;
	}
	return true;
}


int has_zeros(unsigned int x)
{
	while(x>=1)
	{
		if(x%10 == 0)
		{
			return 1;
		}
		x/=10;
	}
	return 0;
}
