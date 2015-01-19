#makefile for gasCostCalculator

gasCost:	main.o
	gcc -o gasCost main.o

main.o:	main.c main.h
	gcc -c main.c

clean:	
	rm gasCost *.o *.~



