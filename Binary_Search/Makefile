TEST_FILE = main.o binary_search.o

test : $(TEST_FILE)
	gcc -o test $(TEST_FILE)
	make clean

main.o : binary_search.h binary_search_test.c
	gcc -c binary_search_test.c -o main.o

binary_search.o : binary_search.h binary_search.c
	gcc -c binary_search.c

clean:
	rm $(TEST_FILE)
