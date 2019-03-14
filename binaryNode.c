#include "binaryNode.h"

bool HasLeaves(BinaryNode* bn){
     //If either leaf exists, returns true, else false.
     if(bn->leftNode != NULL || bn->rightNode != NULL){
          return true;
     }
     else{
          return false;
     }
}

int DepthCheck(BinaryNode* bn){
     //null check
     if(bn == NULL){
          return 0;
     }
     //end of branch
     else if(!HasLeaves){
          return 1;
     }
     //recursively call, returning greater of two depths
     else{
          unsigned int left = 1 + DepthCheck(bn->leftNode);
          unsigned int right = 1 + DepthCheck(bn->rightNode);
          if(left >= right){
               return left;
          }
          else{
               return right;
          }
     }
}
