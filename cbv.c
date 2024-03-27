#include<stdio.h>
void fun(int**);
int main() //calling function
{
  int a=10,b=20;

  printf("\nBefore call of fun A=%d",a);
  fun(&a); // a is actual parameter
  printf("\nBefore call of fun B=%d",b);
  fun(&b);
  printf("\nAfter Call of Fun A=%d",a);
  printf("\nAfter call of fun B=%d",b);
  return 0;
}
void fun(int *x,*y)
{
  *x=100;
  *y=200;
}