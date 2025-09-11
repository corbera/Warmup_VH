CC=gcc

all: part1 part2

clean:
	rm -f part1
	rm -f part2

part1: part1.c part1.h test1.o
	$(CC) -o $@ part1.c test1.o

part2: part2.c part2.h test2.o
	$(CC) -o $@ part2.c test2.o

run1: part1
	sudo ./part1

run2: part2
	./part2
