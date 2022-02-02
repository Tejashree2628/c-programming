#include<stdio.h>
void Strrev(char *str)
{
   char *end=str;
   char temp;
   while(*end != '\0')
   {
     end++;
   }
   end--;
   while(str<end)
   {
     temp=*str;
     *str=*end;
     *end=temp;
     str++;
     end--;
   }
}

int main()
{
  char arr[30];
  printf("enter first character");
  scanf("%[^'\n']s",arr);
  Strrev(arr);
  printf("reverse string is %s",arr);
  return 0;
}