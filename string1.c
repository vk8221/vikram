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
    
    return 0;
}