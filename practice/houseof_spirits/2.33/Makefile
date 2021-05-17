V2.31 = tcache_house_of_spirit
PROGRAMS = $(V2.31)
CFLAGS += -std=c99 -g
LDLIBS += -ldl
LDFLAGS ="-Wl,-rpath=../../../libc233/"
LDFLAGS +="-Wl,--dynamic-linker=../../../libc233/ld-2.33.so"

all: $(PROGRAMS)
clean:
	rm -f $(PROGRAMS)

