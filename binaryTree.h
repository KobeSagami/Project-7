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

void initialize(binary_tree* bt);
bool search(binary_tree* bt, int key);
void insert(binary_tree* bt, int item);
void printinorder(binary_tree* bt);
void printpreorder(binary_tree* bt);
void printpostorder(binary_tree* bt);
int btsize(binary_tree* bt);
int treeheight(binary_tree* bt);

