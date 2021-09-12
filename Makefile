#Makefile
all: add-nbo

add-nbo: sum.o main.o
		g++ -o add-nbo sum.o main.o

main.o: sum.h main.cpp

sum.o: sum.h sum.cpp

clean:
		rm -f add-nbo
		rm -f *.o