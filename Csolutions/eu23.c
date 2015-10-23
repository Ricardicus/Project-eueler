#include <stdio.h>
#include <stdlib.h>

#define MAXVAL 28123

typedef struct lnkdlst
{
	struct lnkdlst* next;
	unsigned int data;
}linkedlist;

typedef enum boole
{
	True = 1,
	False = 0
}boolean;

boolean is_abundant(unsigned int i);
void free_abundants(linkedlist*first);
void add_abundant(linkedlist*first,unsigned int data);
void printlist(linkedlist * first);
int can_be_written_as_sum(unsigned int *abundantnbrs, unsigned int abuntants_upperlimit, unsigned int nbr);

int main()
{
	linkedlist *abundants = calloc(1,sizeof(linkedlist));
	abundants->next = NULL;
	abundants->data = 0;

	unsigned int i = 1;
	double process = 0;
	unsigned int nbr_of_abundants = 0;

	while(i<MAXVAL)
	{
		if(is_abundant(i))
		{
			add_abundant(abundants,i);
			nbr_of_abundants++;
		}
		process = (double)i/MAXVAL;
		i++;		
	}
	/* Getting rid of the first number in the list wich was 0.. */
	linkedlist * first = abundants->next;

	free(abundants);

	unsigned int * abundantnbrs = calloc(nbr_of_abundants,sizeof(unsigned int));

	i = 0;

	linkedlist *ptr = first;
	while(i<nbr_of_abundants)
	{
		abundantnbrs[i] = ptr->data;
		ptr = ptr->next;
		i++;
	}

	unsigned int u = 28123;
	while(can_be_written_as_sum(abundantnbrs,nbr_of_abundants,u))
	{
		u--;
	}

	int sum = 0;

	i = 0;

	while(i<=u)
	{
		if(!can_be_written_as_sum(abundantnbrs,nbr_of_abundants,i))
		{
			sum += i;
		}
		printf("Process: %i \n",i);
		i++;
	}

	printf("\n\n");
	printf("The answer is: %i\n",sum);

	free_abundants(first);

	
	free(abundantnbrs);

	return 0;
}

boolean is_abundant(unsigned int i)
{
	unsigned int n = 1;
	unsigned int sum = 0;
	while(n<i)
	{
		if(i%n == 0)
		{
			sum += n;
		}
		n++;
	}
	if(sum>n)
	{
		return True;
	}
	return False;
}

void free_abundants(linkedlist*first)
{
	linkedlist * ptr = first;
	linkedlist * ptr2;
	while(ptr!=NULL){
		ptr2=ptr;
		ptr=ptr->next;
		free(ptr2);
	}
}

void add_abundant(linkedlist*first,unsigned int data)
{
	linkedlist * ptr = first;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	linkedlist * newnbr = calloc(1,sizeof(linkedlist));
	newnbr->next=NULL;
	newnbr->data=data;
	ptr->next=newnbr;

}

int can_be_written_as_sum(unsigned int *abundantnbrs, unsigned int abuntants_upperlimit, unsigned int nbr)
{
	unsigned int i = 0;
	unsigned int n = 0;

	unsigned int sum = 0;

	while(i < abuntants_upperlimit)
	{
		n = 0;
		while(n < abuntants_upperlimit)
		{
			sum = abundantnbrs[i] + abundantnbrs[n];
			if(sum == nbr)
			{
				return 1;
			}
			n++;
		}
		i++;
	}

	return 0;
}

void printlist(linkedlist*first)
{
	linkedlist * ptr = first;
	while(ptr!=NULL)
	{
		printf("Number: %u is abundant\n",ptr->data);
		ptr=ptr->next;
	}
}