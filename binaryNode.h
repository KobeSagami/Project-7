#ifndef binaryNode
#define binaryNode

#include <stdio.h>
#include <stdbool.h>

typedef struct BinaryNode_struct
{
    int number;
    struct BinaryNode_struct* leftNode;
    struct BinaryNode_struct* rightNode;
} BinaryNode;

bool HasLeaves(BinaryNode* bn);
int MaxDepth(BinaryNode* bn);

void recursiveOrder(BinaryNode* currentNode);
void recursivePre(BinaryNode* currentNode);
void recursivePost(BinaryNode* currentNode);

#endif /* binaryNode.h */
