#include <stdio.h>

#define DIMENSION 	(1001*1001)

int main(void)
{
	unsigned int spiral[DIMENSION+1];

	int i = 1;
	while(i <= DIMENSION)
	{
		spiral[i-1] = i;
		i++;
	}

	unsigned int sum = 1;
	int ci = 1;

	int index = 0;

	while(ci*2*4<DIMENSION)
	{
		i = 0;
		while(i<4 && index<DIMENSION-1)
		{
			index += ci*2;
			sum+=spiral[index];
			i++;
		}
		ci++;
	}

	printf("Sum: %u\n",sum);

	return 0;
}