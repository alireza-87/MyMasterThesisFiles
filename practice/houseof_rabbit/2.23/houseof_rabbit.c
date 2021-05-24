#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdint.h>


int main()
{
	

	fprintf(stderr, "Allocating 3 buffers.\n");
	unsigned long *a = malloc(0x40);
	unsigned long *b = malloc(0x40);
	unsigned long *c = malloc(0x10);
	free(a);
	free(b);
	a[-1]=0xa1;
	malloc(0x1000);


}
