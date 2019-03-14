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
    BinaryNode *currentNode = NULL, *newNode = NULL;
    bool finished = false;

    //insert at root if first element
    if(bt->root == NULL){
        bt->root = (BinaryNode*) malloc(sizeof(BinaryNode));
        bt->root->number = item;
        bt->root->leftNode = NULL;
        bt->root->rightNode = NULL;

        bt->elements++;
        return;
    }

    //create newNode and start traversal from root
    currentNode = bt->root;
    newNode = (BinaryNode*) malloc(sizeof(BinaryNode));
    newNode->number     = item;
    newNode->leftNode   = NULL;
    newNode->rightNode  = NULL;
    
    //loop until destination found
    while (!finished)
    {
        // While the number we're inserting is less than the current node number, keep going to the left.
        if(item <= currentNode->number){
            if(currentNode->leftNode == NULL){
                currentNode->leftNode = newNode;
                bt->elements++;
                return;
            }
            else{
                currentNode = currentNode->leftNode;
            }
            
        }
        //else roll to the right and check
        else{
            if(currentNode->rightNode == NULL){
                currentNode->rightNode = newNode;
                bt->elements++;
                return;
            }
            else{
                currentNode = currentNode->rightNode;
            }
            
        }
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
        Printpreorder(currentNode->leftNode);
        Printpreorder(currentNode->rightNode);
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
    int currentHeight;
    bool finished;
    BinaryNode* currentNode = bt->root;
    
    //FIX ME - TEMP
    finished = true;

    do{
        if(HasLeaves(currentNode)){
            //TODO
            
        }
    } while (!finished);
    
}
