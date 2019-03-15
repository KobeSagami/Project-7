#include "binaryNode.h"

bool HasLeaves(BinaryNode* bn){
     //If either leaf exists, returns true, else false.
     if(bn->leftNode != NULL || bn->rightNode != NULL){
          return true;
     }
     else{
          return false;
     }
}//end of HasLeaves

int MaxDepth(BinaryNode* bn){
     //null check
     if(bn == NULL){
          return 0;
     }
     //end of branch
     else if(!HasLeaves(bn)){
          return 1;
     }
     //recursively call, returning greater of two depths
     else{
          unsigned int left = 1 + MaxDepth(bn->leftNode);
          unsigned int right = 1 + MaxDepth(bn->rightNode);
          if(left >= right){
               return left;
          }
          else{
               return right;
          }
     }
}//end of MaxDepth

void recursiveOrder(BinaryNode* currentNode){
      if(currentNode != NULL) {
          recursiveOrder(currentNode->leftNode);
          printf("%d ",currentNode->number);          
          recursiveOrder(currentNode->rightNode);
   }
}//end of recursiveOrder

void recursivePre(BinaryNode* currentNode){
     if(currentNode != NULL){
          printf("%d ",currentNode->number);
          recursivePre(currentNode->leftNode);
          recursivePre(currentNode->rightNode);
     }
}//end of recursivePre

void recursivePost(BinaryNode* currentNode){
     if(currentNode != NULL) {
          recursivePost(currentNode->leftNode);
          recursivePost(currentNode->rightNode);
          printf("%d ", currentNode->number);
     }
}//end of recursivePost
     
     
