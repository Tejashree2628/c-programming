#include <stdio.h>
int Difference(char *str)
{   
   int iSmall=0,iCapital=0,Diff=0;
   while(*str != '\0')
   {
       if(*str>='a' && *str<='z')
       {
          iSmall++;
       }
       else if(*str>='A' && *str<='Z')
       {
          iCapital++;
       }
       
       str++;
   }
     Diff=iSmall-iCapital;
   return Diff;
    
}
int main()
{
    char arr[20];
    int Count=0;
    printf("enter the string");
    scanf("%[^'\n']s",arr);
    Count=Difference(arr);
    printf("the difference of small character and capital character are%d",Count);
    return 0;
}
