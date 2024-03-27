#include<stdio.h>
int main()
{
    char str[10];
    printf("\nEnter a String:");
    scanf("%s",str);
    int len = 0;
    while (str[len]!='\0')
    {
       printf("\nLenth of String is %d = %c",len+1,str[len]);
       len++;
    }
     printf("\nLenth of String is = %d",len);
     printf("\nReverse String is:");
    for(str[len]='\0';len>=0;len--)
    {
        printf("\n%c",str[len]);
    }
    
    return 0;
}