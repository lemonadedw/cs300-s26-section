.PHONY: all

CC = clang
CFLAGS = -g -Wno-return-stack-address

all: exercise_two

exercise_two: exercise_two.c
	$(CC) -o exercise_two exercise_two.c $(CFLAGS)

clean:
	rm -f exercise_two