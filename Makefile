main:	main.c
	gcc -std=c11 main.c -o main

main.o: main.c
	gcc -c main.c 



clean:
	rm *.o