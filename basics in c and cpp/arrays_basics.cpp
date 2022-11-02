/*
Arrays are defined as collection of similar data elements.

The method of declaring an array is:
  int A[5]; 

    here we get 5 integers and array name is "A" and all those integers can be accessed with name "A".

    where there are 5 integer spaces or locations with indices 0,1,2,3,4.

We may store values as:
  A[0]=27;

EXAMPLE: To declare and initialize an array in main.

  int main(){
    int A[5];   ///DECLARATION
    int B[5]={2,4,5,7,8};   ///INITIALISATION
  }

Main memory is divided into 3 sections: code section, stack and heap.

> code section stores the code or the program written above.

> any declared variable (or here array is declared) will be created inside the stack and this array will be directly accessible to the main function.

> we may also directly store the values.

EXAMPLE: we may also access the elements of an array one by one.

  int main(){
    int B[5]={2,4,5,7,8};
    for(i=0;i<5;i++){
      printf("%d",B[i]);
    }
  }


 latest compilers take 4 bits per integer */
