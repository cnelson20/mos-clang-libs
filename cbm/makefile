all: cbm.lib.a clean

SOURCES = src/*.s

cbm.lib.a: $(SOURCES)
	mos-cx16-clang -c -Wall src/*.s
	llvm-ar rc cbm.lib.a *.o


clean:
	rm *.o
