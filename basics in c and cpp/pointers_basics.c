/* POINTER is an address variable. This means that it stores the address of data rather than data itself.

WHAT IS THE NEED TO POINTER?

As we know, main memory is divided into 3 sections: heap, stack and code section. Programs WILL NOT directly heap memory. Heap memory is external to the program. 

For accessing heap memory, programs need pointers. So the programs must have pointers in it, so that they can directly access anything in heap memory such as array.

Also, for accessing any external file, programs have pointers which are used for accessing that file. The pointer should be of file type.

Therefore, anything such as printer, keyboard, monitor or the internet can be accessed with the help of pointers.

Pointers are also used for parameter passing.

DECLARATION - 

data variable: int a = 10;

address variable: int *p;
                  p = &a; (INITIALISATION)
                  (this will store the address of a)

printing data variable: printf("%d", a);

printing pointer variable: printf("%d", *p); (this is also called DEREFERENCING)

*/

/*

HOW TO ALLOCATE MEMORY IN HEAP?

In C language the function name is malloc() by which memory is allocated in heap.

*/

#include <stdlib.h>

int main(){
  int *p;
  p = (int *)malloc(5*sizeof(int));

  /* As this malloc function returns a void pointer thus we have to type-cast it and say it is integer pointer.

  Now "p" gets the address of the array created in heap. */
}

/*

for performing the same action in C++, 

p = new int[5]; 

*/