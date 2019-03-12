
#include <stdio.h>

int main(void) {
    FILE* inFile = NULL; // File pointer
    int fileNum;         // Data value from file
    int numRead;
    int numElements=0;
    int i;
    
    // Open file
    printf("Opening file myfile.txt.\n");
    inFile = fopen("myfile.txt", "r");
    
    if (inFile == NULL)
    {
        printf("Could not open file myfile.txt.\n");
        return -1; // -1 indicates error
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
        for(i=0;i<numElements;i++)
        {
            numRead = fscanf(inFile, "%d",&fileNum);
            treeArray[i]=fileNum;
        }
        break;
    }
        

   // Done with file, so close it
   fclose(inFile);
   
 printf("Print in order\n");
 printinorder(&bt);
 printf("\nPrint pre order\n");
 printpreorder(&bt);
 printf("\nPrint post order\n");
 printpostorder(&bt);
 printf("\n");
 found = search(&bt,33);
 if (found){
 printf("FOUND 33\n");
 }
 found = search(&bt,38);
 if (found){
 printf("FOUND 38\n");
 }
 printf("Number of elements in tree: %d\n", btsize(&bt));
 printf("Tree height: %d\n", treeheight(&bt)); 

   
   return 0;
}
