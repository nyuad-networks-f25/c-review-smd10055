
all : hello
hello : main.o sizeinfo.o number.o bubbleSort.o
main : main.c status.h student.h 
	gcc main.c --std c2x -Wall -Wextra -o main 

sizeinfo.o : sizeinfo.c sizeinfo.h
	gcc sizeinfo.c -Wall -Wextra -o sizeinfo

number.o:  number.c
	gcc number.c -Wall -Wextra -o number

bubbleSort.o: bubbleSort.c
	gcc bubbleSort.c -Wall -Wextra -o bubbleSort



clean:
	rm main
