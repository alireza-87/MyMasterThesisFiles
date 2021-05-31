V2.23 = sample1
PROGRAMS = $(V2.23)
CFLAGS += -std=c99 -g
LDLIBS += -ldl
LDFLAGS ="-Wl,-rpath=../../../../libc223/"
LDFLAGS +="-Wl,--dynamic-linker=../../../../libc223/ld-2.23.so"
all: $(PROGRAMS)
clean:
	rm -f $(PROGRAMS)

