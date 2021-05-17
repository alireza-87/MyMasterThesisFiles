V2.31 = tcache_house_of_spirit
PROGRAMS = $(V2.31)
CFLAGS += -std=c99 -g
LDLIBS += -ldl
LDFLAGS ="-Wl,-rpath=../../../libc231/"
LDFLAGS +="-Wl,--dynamic-linker=../../../libc231/ld-2.31.so"

all: $(PROGRAMS)
clean:
	rm -f $(PROGRAMS)

