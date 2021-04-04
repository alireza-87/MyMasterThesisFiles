#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
	setbuf(stdout, NULL);

	printf("Allocating 3 buffers.\n");
	int *a = calloc(1, 8);
	int *b = calloc(1, 8);
	int *c = calloc(1, 8);

	printf("1st calloc(1, 8): %p\n", a);
	printf("2nd calloc(1, 8): %p\n", b);
	printf("3rd calloc(1, 8): %p\n", c);

	printf("Freeing the first one...\n");
	free(a);
	free(b);
	free(c);

	a = calloc(1, 8);
	b = calloc(1, 8);
	c = calloc(1, 8);

	printf("1st calloc(1, 8): %p\n", a);
	printf("2nd calloc(1, 8): %p\n", b);
	printf("3rd calloc(1, 8): %p\n", c);

}
