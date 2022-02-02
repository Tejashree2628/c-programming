#include <stdio.h>

int CountWhite(char *str)
{   
    int iCnt=0;
   while(*str != '\0')
   {
       if(*str == ' ')
       {
           iCnt++;        
       }
       str++;
   }
     return iCnt;
}
int main()
{
    char arr[20];
    int count=0;
    printf("enter the string");
    scanf("%[^'\n']s",arr);
    count=CountWhite(arr);
    printf("total number of white space are %d\t",count);
    return 0;
}
