#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void myprint(int *data){
	printf("test : %p\n" ,data);	
}

int main()
{
	setbuf(stdout, NULL);

	printf("Allocating 3 buffers.\n");
	int *a = malloc(8);
	int *b = malloc(8);
	int *c = malloc(8);

	printf("1st malloc(8): %p\n", a);
	printf("2nd malloc(8): %p\n", b);
	printf("3rd malloc(8): %p\n", c);

	myprint(a);

	printf("Freeing the first one...\n");
	free(a);
	free(b);
	free(c);

	myprint(a);

	a = malloc(8);
	b = malloc(8);
	c = malloc(8);

	printf("1st malloc(8): %p\n", a);
	printf("2nd malloc(8): %p\n", b);
	printf("3rd malloc(8): %p\n", c);

}
