#include <stdio.h>

void ConvertUpper(char *str)
{   
   while(*str != '\0')
   {
       if(*str >='a' && *str<='z')
       {
            printf("%c",*str-32);
       }
       else
       {
            printf("%c",*str);
       }
       
       
       str++;
   }
  
}
int main()
{
    char arr[20];
    printf("enter the string");
    scanf("%[^'\n']s",arr);
    ConvertUpper(arr);
    return 0;
}
