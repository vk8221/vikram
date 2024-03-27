#include<STDIO.H>
void msg();
int main()
{
    msg();
    msg();
    msg();
    msg();
    msg();
    return 0;
}
void msg()
{
   static int x=1; 
    printf("\nX=%d",x);
    x++;
}