
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

  int a = 10;
  int *p;
  p=&a; 

  cout<<a<<endl;
  cout<<p<<endl;
  printf("using pointer: %d %d", p, &a);
  

  /* "*" is used to take the value from the address. */

  return 0;

}