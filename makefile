all: functions.c test.c
	clang functions.c test.c -o test
