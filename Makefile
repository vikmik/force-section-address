
test: test.c test.ld
	gcc -fno-asynchronous-unwind-tables test.c -T test.ld -o test
