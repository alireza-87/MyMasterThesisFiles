V2.23 = house_of_force
PROGRAMS = $(V2.23)
CFLAGS += -std=c99 -g
LDLIBS += -ldl
LDFLAGS="-Wl,-rpath=../../../libc223/"
LDFLAGS +="-Wl,--dynamic-linker=../../../libc223/ld-2.23.so"

all: $(PROGRAMS)
clean:
	rm -f $(PROGRAMS)

