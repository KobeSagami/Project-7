#ifndef binaryNode
#define binaryNode

#include <stdio.h>
#include <stdbool.h>

typedef struct BinaryNode_struct
{
    int number;
    struct BinaryNode_struct* leftPtr;
    struct BinaryNode_struct* rightPtr;
} BinaryNode;

bool HasLeaves(BinaryNode* bn);

#endif /* binaryNode.h */
