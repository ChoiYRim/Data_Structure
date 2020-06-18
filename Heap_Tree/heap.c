#include "heap.h"

heapType * createHeap(void)
{
	heapType * h = (heapType *)malloc(sizeof(heapType));
	ELEMENT = 100;
	h->heap = (int *)malloc(sizeof(int)*ELEMENT);
	memset((int *)h->heap,0,sizeof(h->heap));
	h->heap_size = 0;
	return h;
}

void push(heapType * h,int item,bool max_min)
{
	int i;

	h->heap_size = h->heap_size + 1;
	if(h->heap_size >= ELEMENT)
	{
		ELEMENT *= 2;
		int * tmp = (int *)malloc(sizeof(int)*ELEMENT);
		memset((int *)tmp,0,sizeof(tmp));
		for(i = 0; i < h->heap_size; i++)
			tmp[i] = h->heap[i];
		free(h->heap);
		h->heap = tmp;
	}

	i = h->heap_size;

	if(max_min == TRUE) // max heap
	{
		while((i != 1) && (item > h->heap[i/2]))
		{
			h->heap[i] = h->heap[i/2];
			i /= 2;
		}
		h->heap[i] = item;
	}
	else // min heap
	{
		while((i != 1) && (item < h->heap[i/2]))
		{
			h->heap[i] = h->heap[i/2];
			i /= 2;
		}
		h->heap[i] = item;
	}
}

int pop(heapType * h,bool max_min)
{
	int parent,child;
	int item,temp;

	item = h->heap[1];
	temp = h->heap[h->heap_size]; // last element
	h->heap_size = h->heap_size-1; // decreasing size
	parent = 1;
	child = 2;

	while(child <= h->heap_size)
	{
		if(max_min == TRUE) // max heap
		{
			if((child < h->heap_size) && (h->heap[child] < h->heap[child+1]))
				child++;
			if(temp >= h->heap[child])
				break;
		}
		else // min heap
		{
			if((child < h->heap_size) && (h->heap[child] > h->heap[child+1]))
				child++;
			if(temp <= h->heap[child])
				break;
		}
		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	return item;
}
