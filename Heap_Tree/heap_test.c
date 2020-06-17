#include "heap.h"

int main(void)
{
	int i,n,item;
	heapType * heap = createHeap();

	/*
	push(heap,10,1);
	push(heap,45,1);
	push(heap,19,1);
	push(heap,11,1);
	push(heap,96,1);
	*/

	for(i = 0; i < 120; i++)
		push(heap,i,1);

	printHeap(heap);
	n = heap->heap_size;

	for(i = 1; i <= n; i++)
	{
		item = pop(heap,1);
		printf(" \n delete : [%d] ", item);
	}

	exit(EXIT_SUCCESS);
}
