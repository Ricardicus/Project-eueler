#include <stdio.h>
#include <stdlib.h>
	
#define MAXNUMBER 	1000

struct mynumber 
{
	struct mynumber* next;
	long data;
};

struct mynumber* factorial(int n);
void multiply(struct mynumber*,long mult,long carryin);
void freemynumber(struct mynumber*);

int main()
{
	long n = 100;
	
	struct mynumber *number;
	
	number = factorial(n);

	long sum = 0;
	long nbr;
	struct mynumber *nbrptr = number;

	while(nbrptr!=NULL)
	{
		nbr = nbrptr->data;
		while(nbr)
		{
			sum+=nbr%10;
			nbr/=10;
		}
		nbrptr = nbrptr->next;
	}

	printf("Sum: %ld\n",sum);
	freemynumber(number);
	return 0;
}

struct mynumber* factorial(int n)
{	
	struct mynumber *nbr = malloc(sizeof(struct mynumber));
	nbr->next = NULL;
	nbr->data = 1;
	
	int i;
	for(i = n;i>0;i--)
	{
		multiply(nbr,i,0);		
	}
	
	return nbr;

}

void multiply(struct mynumber* number,long mult,long carryin)
{
	long newdata = 0;	
	
	newdata = number->data * mult + carryin;
	if(newdata > MAXNUMBER)
	{
	
	number->data = newdata % MAXNUMBER;
	
		if(number->next == NULL)
		{
			struct mynumber* newnumber = malloc(sizeof(struct mynumber));
			newnumber->data = 0;	
			newnumber->next = NULL;

			number->next = newnumber; 

			multiply(newnumber,0,newdata/MAXNUMBER);
		}
		else
		{
			multiply(number->next,mult,newdata/MAXNUMBER);
		}	
	}
	else
	{
	number->data = newdata;
		if(number->next != NULL)
		{
			multiply(number->next,mult,0);
		}
	}
}


void freemynumber(struct mynumber *number)
{
	if(number!=NULL)
	{	
		struct mynumber *nextone = number->next;
		freemynumber(nextone);	
		free(number);
	}
	
}