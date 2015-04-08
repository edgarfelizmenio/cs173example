
CC=gcc
CFLAGS=-I.
LDFLAGS=

.PHONY: clean

testA: componentA.o componentATests.o runner.o
	$(CC) -o $@ $^ $(LDFLAGS)

testB: componentB.o  componentBTests.o runner.o
	$(CC) -o $@ $^ $(LDFLAGS)

testAB: componentA.o componentATests.o componentABTests.o runner.o
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm ./*.o
	rm ./testA ./testB ./testAB

