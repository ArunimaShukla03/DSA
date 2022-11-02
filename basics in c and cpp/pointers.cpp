
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

  int a = 10;
  int *p;
  p=&a; 

  cout<<a<<endl;
  cout<<p;
  printf("using pointer %d", *p);
  

  /* "*" is used to take the value from the address. */

  return 0;

}