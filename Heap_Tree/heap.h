// COPYRIGHT : Soongsil OS LAB
// WRITER 	 : NCNYR

#ifndef _HEAP_TREE_
#define _HEAP_TREE_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0 

int ELEMENT;

typedef _Bool bool;

typedef struct
{
	int *heap;
	int heap_size;
}heapType;

heapType * createHeap(void);

void push(heapType * h,int item,bool max_min);

int pop(heapType * h,bool max_min);

#endif
