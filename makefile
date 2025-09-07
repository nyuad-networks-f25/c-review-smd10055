main: main.c status.h student.h sizeinfo.c sizeinfo.h
	gcc main.c --std c2x -Wall -Wextra -o main 

clean:
	rm main
