#ifndef binaryNode
#define binaryNode

#include <stdio.h>

typedef struct BinaryNode_struct
{
    int number;
    struct BinaryNode_struct* leftPtr;
    struct BinaryNode_struct* rightPtr;
} BinaryNode;

#endif /* binaryNode.h */
