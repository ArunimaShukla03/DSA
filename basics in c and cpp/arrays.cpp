
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int A[5]={2, 4, 6, 18, 3};

  /* during initialisation, we may also skip decaration of the size of an array and the number of elements will define the size of the array.*/

  cout<<sizeof(A)<<endl;
  cout<<A[1]<<endl;

  cout<<endl;

  /* we may also write the syntax of C and it would work*/
  
  printf("%d\n",A[2]);

  int B[10]={2,6,8,23,57,4,13};

  cout<<sizeof(B)<<endl;
  cout<<B[8]<<endl;
  printf("%d\n",B[9]);

  cout<<endl;

  for(int i=0; i<10; i++){
    cout<<B[i]<<endl;
  }

  cout<<endl;

  /* to initialise the array with 0, we may simply write A[5]={0}; */

  /* for loop can also be utilized using x:A which means that a variable x is taking the values from A one by one */

  for(int x:A){
    cout<<x<<endl;
  }

  cout<<endl;

  int n;
  cout<<"Enter the size of the array:";
  cin>>n;

  int X[n];

  for(int x:X){
    cout<<x<<endl;
  }

  /* all the output values will be garbage values (i.e. the values are not assigned by the user) as no value is assigned. */

  return 0;
}
