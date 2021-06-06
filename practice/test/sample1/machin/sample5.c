#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{

	printf("Allocating 2 buffers.\n");
	int *a = malloc(8);
	int *b = malloc(8);
	

	printf("1st malloc(8): %p\n", a);
	printf("2nd malloc(8): %p\n", b);
	

	printf("Freeing ...\n");
	free(a);
	free(b);

	calloc(1,8);
	calloc(1,8);

	
}
