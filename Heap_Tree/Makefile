RESULT_OBJECTS = main.o heap.o

test : $(RESULT_OBJECTS) 
	gcc -o test $(RESULT_OBJECTS)
	make clean

main.o : heap.h heap_test.c
	gcc -c heap_test.c -o main.o

heap.o : heap.h heap.c
	gcc -c heap.c

clean :
	rm $(RESULT_OBJECTS)
