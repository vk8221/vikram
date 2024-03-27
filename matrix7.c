#include<stdio.h>
int main()
{
    int a[3][3],i,j,b[3][3],sum[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter  first matrix Number = ");
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }

  for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter  second matrix number = ");
            scanf("%d",&b[i][j]);
        }
    }

 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }
   for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of the two metrix= \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
     printf("%d\t",sum[i][j]);
    }
    printf("\n");
    }
    
    return 0;
}  
