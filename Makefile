CC ?= gcc
CFLAGS = -g -Wall
OBJS = main.o test-strtol.o

test: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

main.o: main.c
	$(CC) -c $(CFLAGS) -o $@ $<

test-strtol.o: test-strtol.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm test $(OBJS)
