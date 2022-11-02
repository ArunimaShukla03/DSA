/* STRUCTURES can be defined as collection of data elements that are related data elements under one name. And these data members may be of similar or dissimilar type OR collection of dissimilar data items under one name are called STRUCTURES.

STRUCTURE is used for defining user defined data types. Apart from primitive data types that we already have like integer or float, using these parameters we can define our own data type depending on our requirements.

EXAMPLE: if we need to DEFINE a rectangle using structure, we may do so by

  struct Rectangle
  {
    int length;
    int breadth;
  }

Assuming that integer takes 2 bytes of memory than this particular structure will take total of 4 bytes of memory, i.e., the SIZE OF A STRUCTURE is the total amount of memory consumed by all its members.

DECLARATION -

  struct Rectangle
  {
    int length;
    int breadth;
  }

  int main(){

    struct Rectangle r;

    (here "struct Rectangle" is a keyword, and then give the name as "r". This is the declaration and this "r" will occupy the memory space.)

    struct Rectangle r = {10, 5};

    (this is DECLARATION + INITIALISATION. This "r" is created inside the stack of main memory.)
  }

ACCESSING - 

  struct Rectangle
  {
    int length;
    int breadth;
  }

  int main(){

    r.length = 15; 
    r.breadth = 10;

    ("." operator is used for accessing the member)

    printf("Area of rectangle is %d", r.length*r.breadth);
  }

  */