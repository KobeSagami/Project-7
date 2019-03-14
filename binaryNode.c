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
