#include<stdio.h>
int main()
{
    int a[3][3],i,j,b[3][3],m[3][3];
    printf("\nEnter  first matrix Number = ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter element of %d row and %d cols =",i+1,j+1);
            scanf("\n%d",&a[i][j]);
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
     printf("\nEnter  second matrix number  ");

  for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           
              printf("\nEnter element of %d row and %d cols =",i+1,j+1);
            scanf("\n%d",&b[i][j]);
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
        m[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("\nMultiply of the two metrix= \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
     printf("%d\t",m[i][j]);
    }
    printf("\n");
    }
    
    return 0;
}