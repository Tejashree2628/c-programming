#include <stdio.h>
#include<stdbool.h>

void DisplayASCII(char ch)
{   
   printf("Decimal:\t%d\nOctal:\t%o\nHexadecimal:\t%x",ch,ch,ch);
    
    
}
int main()
{
    int cRet=0;
    char ch='\0';
    printf("enter the character");
    scanf("%c",&ch);
    DisplayASCII(ch);
    return 0;
}
