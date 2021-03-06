
#include <stdio.h>
#include "binaryTree.h"

int main(int argc, char* argv[]) {
    FILE* inFile = NULL; // File pointer
    int fileNum;         // Data value from file
    int numRead;
    int numElements = 0;
    int i;
    BinaryTree* bt = NULL;
    bool found = false;
    
    //Checks for correct number of command line arguments
    if (argc < 2 || argc > 2) {
      printf("Too few or too many command line arguments.");
      return 1;
    }
    
    // Open file
    printf("Opening file myfile.txt.\n");
    inFile = fopen(argv[1], "r");
    
    if (inFile == NULL)
    {
        printf("Could not open file myfile.txt.\n");
        return 1; // -1 indicates error
    }
    
    //gets the number of elements in the file
    while (!feof(inFile))
    {
        numRead = fscanf(inFile, "%d", &fileNum);
        if ( numRead == 1 )
        {
            numElements = numElements+1;
        }
    }
    
    int treeArray[numElements];
    rewind(inFile);//resets the file reader
    
    //puts the elements in an array
    while(!feof(inFile))
    {
        for (i = 0; i < numElements; ++i)
        {
            numRead = fscanf(inFile, "%d", &fileNum);
            treeArray[i] = fileNum;
        }
        break;
    }
    // Initializes BST and inserts items into the BST
    bt = (BinaryTree*)malloc(sizeof(BinaryTree));
    Initialize(bt);
    for (i = 0; i < numElements; ++i) {
      Insert(bt, treeArray[i]);
    } 
    
    // Done with file, so close it
    fclose(inFile);
    
    printf("Print in order\n");
    Printinorder(bt);
    
    printf("\nPrint pre order\n");
    Printpreorder(bt);
    
    printf("\nPrint post order\n");
    Printpostorder(bt);
    
    printf("\n");
    found = Search(bt, 33);
    if (found)
    {
        printf("FOUND 33\n");
    }
    
    found = Search(bt, 38);
    if (found)
    {
        printf("FOUND 38\n");
    }
    
    printf("Number of elements in tree: %d\n", Btsize(bt));
    
    printf("Tree height: %d\n", Treeheight(bt));
    
    
    return 0;
}
