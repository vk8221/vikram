#include<stdio.h>
int main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
      printf("\n Enter the %d element =",i+1);
      scanf("%d",&a[i]);
    }
    printf("\n even number is ");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
    printf("\n%d",a[i]);
    }
    return 0;
}