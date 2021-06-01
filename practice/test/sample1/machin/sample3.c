#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
	setbuf(stdout, NULL);

	printf("Allocating 3 buffers.\n");
	int *a = malloc(64);
	int *b = malloc(64);
	int *c = malloc(64);
	malloc(1);

	printf("1st malloc(8): %p\n", a);
	printf("2nd malloc(8): %p\n", b);
	printf("3rd malloc(8): %p\n", c);

	printf("Freeing the first one...\n");
	free(a);
	free(b);
	free(c);

	malloc(64);
	malloc(32);
	malloc(10);

	
}
