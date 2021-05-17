V2.31 = fastbin_dup
PROGRAMS = $(V2.31)
CFLAGS += -std=c99 -g
LDLIBS += -ldl
LDFLAGS ="-Wl,-rpath=../../../libc233/"
LDFLAGS +="-Wl,--dynamic-linker=../../../libc233/ld-2.33.so"

all: $(PROGRAMS)
clean:
	rm -f $(PROGRAMS)

