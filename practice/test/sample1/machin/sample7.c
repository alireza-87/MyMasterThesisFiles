#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
	setbuf(stdout, NULL);

	printf("Allocating 3 buffers.\n");
	int *a = malloc(8);
	int *b = malloc(18);
	int *c = malloc(28);

	printf("1st malloc(8): %p\n", a);
	printf("2nd malloc(8): %p\n", b);
	printf("3rd malloc(8): %p\n", c);

	printf("Freeing the first one...\n");
	free(a);
	free(b);
	free(c);
}
