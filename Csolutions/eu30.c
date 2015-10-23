#include <stdio.h>
#include <stdlib.h>

struct nbrs
{
	struct nbrs * next;
	unsigned long nbr;
};

unsigned long sum_fifth_powers(unsigned long);
void free_nbrs(struct nbrs *);

int main(void)
{

	struct nbrs * list = malloc(sizeof(struct nbrs));
	struct nbrs * p = list;
	p->next = NULL;
	p->nbr = 0;
	for(unsigned long i = 2; i<1000000;i++)
	{
		if(i == sum_fifth_powers(i))
		{
			p->nbr = i;
			p->next = malloc(sizeof(struct nbrs));
			p = p->next;
			p->next = NULL;
		}
	}

	unsigned long sum = 0;

	p = list;
	int i = 1;
	while(p!=NULL)
	{
		printf("%lu\n",p->nbr);
		sum += p->nbr;
		i++;
		p = p->next;
	}

	printf("Summan av kardemumman: %lu",sum);
	free_nbrs(list);
}

void free_nbrs(struct nbrs * p)
{
	struct nbrs * ent = p;
	struct nbrs * ent2;
	while(ent->next!=NULL)
	{
		ent2 = ent;
		ent = ent->next;
		free(ent);
	}

}

unsigned long sum_fifth_powers(unsigned long val)
{
	unsigned long vl = val;
	unsigned long digit = 0;
	unsigned long sum = 0;
	while(vl>=1)
	{
		digit = vl%10;
		sum += digit * digit * digit * digit * digit;
		vl/=10;
	}

	return sum;
}