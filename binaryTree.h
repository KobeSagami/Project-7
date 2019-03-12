/* Project 7 - Binary Search Tree
** 16 March 2019
** Branden Ramsdell
** Kobe Sagami
** Hannah Hollenback */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "binaryNode.h"

typedef struct BinaryTree_Struct
{
    int elements;
    BinaryNode root;
} BinaryTree;

void Initialize(BinaryTree* bt);
bool Search(BinaryTree* bt, int key);
void Insert(BinaryTree* bt, int item);
void Printinorder(BinaryTree* bt);
void Printpreorder(BinaryTree* bt);
void Printpostorder(BinaryTree* bt);
int Btsize(BinaryTree* bt);
int Treeheight(BinaryTree* bt);

