#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SUM 			500
#define MAX_LETTERS 		100

typedef enum bool{
	true,
	false
} boolean;

int to_nbr(char*);
boolean is_triangular(int*,char*);

int main(void)
{	

	int nbr_triangle_words = 0;

	int stop = MAX_SUM;
	int * triangulars = (int *) calloc(MAX_SUM*(MAX_SUM+1)/2,sizeof(int));

	int i = 1;
	while(i<MAX_SUM){
		triangulars[i*(i+1)/2] = 1;
		i++;
	}

	char wordbuffer[MAX_LETTERS];
	memset(wordbuffer,'\0',MAX_LETTERS);
	int bufferindex = 0;

	int read = 1;

	char c;
	while((c = getc(stdin))!=EOF){
		if(c == ','){
			if(triangulars[to_nbr(wordbuffer)]){
				nbr_triangle_words++;
			}
			memset(wordbuffer,'\0',MAX_LETTERS);
			bufferindex = 0;
		}
		else if(c != '"'){
			wordbuffer[bufferindex] = c;
			bufferindex++;
		}
	}

	printf("nbr of triangle words: %d",nbr_triangle_words);

	free(triangulars);
	return 0;
}

int to_nbr(char * word){
	int i = 0;
	int sum = 0;
	while(word[i]){
		sum+=(int)word[i] - (int) 'A' + 1;
		i++;
	}

	return sum;
}