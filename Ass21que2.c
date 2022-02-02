#include <stdio.h>

void CovertCase(char ch)
{
    if((ch>='a') && (ch<='z')) 
    {
        printf("%c",ch-32);
    }
    else if((ch>='A') && (ch<='Z')) 
    {
        printf("%c",ch+32);
    }
    else
    {
        printf("%c",ch);
    }
    
    
}
int main()
{
    char ch='\0';
    printf("enter the character");
    scanf("%c",&ch);
    CovertCase(ch);
    return 0;
}
