V2.23 = fastbin_dup fastbin_dup_into_stack fastbin_dup_consolidate
PROGRAMS = $(V2.23)
CFLAGS += -std=c99 -g
LDLIBS += -ldl
LDFLAGS ="-Wl,-rpath=../../../libc223/"
LDFLAGS +="-Wl,--dynamic-linker=../../../libc223/ld-2.23.so"
all: $(PROGRAMS)
clean:
	rm -f $(PROGRAMS)

