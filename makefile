main: main.c status.h student.h
	gcc main.c --std c2x -Wall -Wextra -o main 

clean:
	rm main
