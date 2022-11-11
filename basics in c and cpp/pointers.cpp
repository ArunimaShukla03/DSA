
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){

  int a = 10;
  int *p;
  p=&a; 

  cout<<a<<endl;
  cout<<p<<endl;
  printf("dereferencing: %d\n", *p);
  printf("using pointer: %d %d", p, &a);
  
  cout<<endl;

  /* "*" is used to take the value from the address. */
  
  /* pointer to an array */

  int A[5]={2,6,9,6,7};
  int *pointer;

  /* we don't have to write "&" in case of array name as it is in itself the starting address. */

  /* still if you want to use "&" then you may write p=&A[0] as it will store the address of the first element in the array */

  pointer=&A[0];

  for(int i=0;i<5;i++){
    cout<<A[i]<<endl;
  }

  cout<<endl;

  for(int i=0; i<5; i++){
    cout<<pointer[i]<<endl;
  } 

  return 0;

}