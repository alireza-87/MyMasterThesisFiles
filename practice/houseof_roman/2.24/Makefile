V2.24 = house_of_roman
PROGRAMS = $(V2.24)
CFLAGS += -std=c99 -g -fPIE -pie
LDLIBS += -Wl,--no-as-needed -ldl
LDFLAGS="-Wl,-rpath=../../../libc224/"
LDFLAGS +="-Wl,--dynamic-linker=../../../libc224/ld-2.24.so"

all: $(PROGRAMS)
clean:
	rm -f $(PROGRAMS)

