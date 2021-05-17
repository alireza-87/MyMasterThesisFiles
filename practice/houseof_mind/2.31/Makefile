V2.31 = house_of_mind_fastbin
PROGRAMS = $(V2.31)
CFLAGS += -std=c99 -g
LDLIBS += -ldl
LDFLAGS ="-Wl,-rpath=../../../libc231/"
LDFLAGS +="-Wl,--dynamic-linker=../../../libc231/ld-2.31.so"

all: $(PROGRAMS)
clean:
	rm -f $(PROGRAMS)

