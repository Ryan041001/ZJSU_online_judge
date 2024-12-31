#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
	char date;
	struct tree *left;
	struct tree *right;
} tree;

tree CreatTree()
{
	tree *node = (tree *)malloc(sizeof(struct tree));
	node->date = '\0';
	node->left = NULL;
	node->right = NULL;
}
