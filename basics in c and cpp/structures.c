/* COMPLEX NUMBERS */
#include <stdio.h>

struct complex{
  int real;
  int img;
} c1;

/* STUDENT INFORMATION */

struct student{
  int roll;
  char name[25];
  char dept[10];
  char address[50];
};

int main(){
  struct student s[2]={{21, "Joe", "computer", "los angeles"},{32, "Jim", "civil", "boston"}};

  /* we may also declare this variable outside main function. Also along with the defining of the structure. */

  printf("%d", s[0].roll);
  printf("%s", s[1].name);
  printf("%ld", sizeof(s));
}