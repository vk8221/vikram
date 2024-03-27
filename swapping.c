#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter Value of A and B");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter Swapping A=%d and B=%d",a,b);
    return 0;
}