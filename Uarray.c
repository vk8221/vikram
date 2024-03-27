#include<stdio.h>
int main()
{
    int i,j,a[10], x, xfalg=0;
    for(i=0;i<10;i++)
    {
      printf("\n Enter the %d element =",i+1);
      scanf("%d",&a[i]);
 
    }
    for(j=0;j<10;i++)
    {
     x=a[i];
     xfalg=0;
     for(j=i+1;j<10;i++)
     {
       if(x==a[j])
       {
        xfalg=1;
        break;
       }
     }
       if(xfalg==0)
       {
          printf("\n %d",x);
       }
     
    }   
    return 0;
}