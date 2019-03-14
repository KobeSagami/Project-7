p7.exe : main.o binaryTree.o binaryNode.o
    gcc main.o binaryTree.o binaryNode.o -0 p7.exe

main.o : main.c  binaryTree.h
    gcc -Wall -c main.c

binaryTree.o : binaryTree.h
    gcc -Wall -c binaryTree.c

binaryNode.o : binaryNode.h
    gcc -Wall -c binaryNode.c

clean:
    rm *.0 p7.exe
    ls
