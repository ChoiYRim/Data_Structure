#ifndef _BINARY_SEARCH_TREE_
#define _BINARY_SEARCH_TREE_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

#define TRUE 1
#define FALSE 0

typedef struct treeNode
{
	char data;
	struct treeNode *left;
	struct treeNode *right;
}treeNode;

treeNode *makeRootNode(char data, treeNode *leftNode, treeNode *rightNode);

void preorder(treeNode *root);

void inorder(treeNode *root);

void postorder(treeNode *root);

#endif
