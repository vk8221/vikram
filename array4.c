#include<stdio.h>
int main()
{
    int i,a[10],s,f=0;
    for(i=0;i<10;i++)
    {
      printf("\n Enter the %d element =",i+1);
      scanf("%d",&a[i]);
    }
     printf("\nEnter the search element value =");
     scanf("%d",&s);
     for(i=0;i<10;i++)
     {
         if(s==a[i])
      {
        f=1;
        break;
      }
     }
     if(f==1)
     {
     printf("\nsearch number is found element is  %d",i+1);
     }
     else
     printf("\nsearch number is not found");
    return 0;
}