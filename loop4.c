#include<stdio.h>
int main()
{
    int i,p=1;
    for ( i = 1; i <= 5; i++)
    {
        p= p*i;
        printf("%d",i);
    }
    printf("\nProduct of All numbers =%d",p);
    return 0;
}
