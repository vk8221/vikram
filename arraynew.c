#include<stdio.h>
int main()
{
    int a[10],i,m,l;
    for(i=0;i<10;i++)
    {
    printf("\nEnter %d element value = ",i+1);
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
    m=a[0];
      for(i=1;i<10;i++)
    {
      if(a[i]<m)
      {
        m=a[i];
      }
    }
    printf("\nminimum value is= %d",m);
    printf("\nmaximum value is = %d ",l);
    return 0;

}