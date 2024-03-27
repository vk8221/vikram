#include<stdio.h>
int main()
{
    int i,a[10],l;
    for(i=0;i<10;i++)
    {
      printf("\n Enter the %d element =",i+1);
      scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=1;i<10;i++)
    {
      if(a[i]>l)
      {
        l=a[i];
      }
    }
    printf("biggest number is=%d",l);
    return 0;
}