all: outside.o module.o
	cc -o outside outside.o module.o

clean:
	rm -f *~ *.o outside
