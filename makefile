all: functions.c test.c
	clang functions.c test.c -o test
run:
	./test e FEATHER file1 file2 && ./test d FEATHER file2 file3
clean:
	rm file2 && rm file3 && rm test
