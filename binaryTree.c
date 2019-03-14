#include "binaryTree.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Initialize(BinaryTree *bt)
{
    bt->root = NULL;
    bt->elements = 0;
}

//TODO
bool Search(BinaryTree* bt, int key)
{
    BinaryNode *currentNode = bt->root;
    
    // If the number we're searching for is not the current node number, repeat this loop.
    while (currentNode->number != key)
    {
        // If the nodes to the left of us and right of us are null that means we're at the bottom and we haven't found a match.
        if ( (currentNode->leftNode == NULL) && (currentNode->rightNode == NULL) )
        {
            return 0;
        }
        
        // If the number we're searching for is greater than current node number, go to the left.
        if (key <= currentNode->number)
        {
            currentNode = currentNode->leftNode;
        }
        // If the number we're searching for is less than the current node number, go to the right.
        else if (key >= currentNode->number)
        {
            currentNode = currentNode->rightNode;
        }
    }
    
    // Found.
    return 1;
}

//TODO
void Insert(BinaryTree* bt, int item)//HH
{
    BinaryNode *newNode = (BinaryNode*) malloc(sizeof(BinaryNode));
    newNode->number = item;
    newNode->leftNode = NULL;
    newNode->rightNode = NULL;
    
    BinaryNode *currentNode;
    
    // If the root is null that means there's no root yet and we can just insert our new node as the root.
    if (bt->root == NULL)
    {
        bt->root = newNode;
    }
    else
    {
        currentNode = bt->root;
        
        // While the node we're at is NOT null, repeat this loop. Otherwise, when it's null that means we're at the bottom and can insert our new node.
        while (currentNode != NULL)
        {
            // While the number we're inserting is less than the current node number, keep going to the left.
            while (item <= currentNode->number)
            {
                currentNode = currentNode->leftNode;
            }
            
            // If the number we're inserting is greater than the current node number, go to the right once.
            if (item >= currentNode->number)
            {
                currentNode = currentNode->rightNode;
            }
        }
        
        currentNode = newNode;
    }
}

//TODO
void Printinorder(BinaryTree* bt)
{
    BinaryNode *lastNode = bt->root;
    BinaryNode *currentNode = bt->root;
    
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
    BinaryNode *currentNode = bt->root;
    if(bt->root != NULL){
        printf("%d ",currentNode->number);
        Printpreorder(currentNode->leftnode);
        Printpreorder(currentNode->rightnode);
    }
        
    
}//end of Printpreorder

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
