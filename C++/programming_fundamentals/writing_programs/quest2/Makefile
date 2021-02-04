# -*-Makefile-*-

CC=g++
OPS=-g -Wall #-Werror
OBJS = values.o

mean: ./mean.cpp $(OBJS) 
	$(CC) $(OPS) -o mean mean.cpp $(OBJS)

mode: ./mode.cpp $(OBJS)
	$(CC) $(OPS) -o mode mode.cpp $(OBJS)

values.o: ./values.cpp
	$(CC) $(OPS) -c values.cpp

clean:
	rm -r mean mode *.o > /dev/null 2>&1
