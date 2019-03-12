#include "binaryTree.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Initialize(BinaryTree *bt)
{
    bt->root = NULL;
    bt->elements = 0;
}

bool Search(BinaryTree* bt, int key)
{

}

void Insert(BinaryTree* bt, int item)//HH
{
    
}

void Printinorder(BinaryTree* bt)
{
    BinaryNode lastNode = bt->root;
    BinaryNode currentNode = bt->root;
    
    while (currentNode != NULL)
    {
        if (currentNode->leftNode == NULL)
        {
            printf("%d", currentNode->number);
            
            if (currentNode == bt->root)
                break;
            
            if (currentNode->rightNode == NULL)
                currentNode = lastNode;
            else
                lastNode = currentNode;
                currentNode = currentNode->rightNode;
        }
        else
        {
            lastNode = currentNode;
            currentNode = currentNode->leftNode;
        }
    }
}

void Printpreorder(BinaryTree* bt)//HH
{
    
}

void Printpostorder(BinaryTree* bt)
{
    
}

int Btsize(BinaryTree* bt)
{
    return bt->elements;
}

int Treeheight(BinaryTree* bt)
{
    
}
