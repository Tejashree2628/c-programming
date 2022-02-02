#include <stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    if((ch>='A') &&(ch<='Z')) 
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char ch='\0';
    bool iRet=false;
    printf("enter the character");
    scanf("%c",&ch);
    iRet=ChkCapital(ch);
    if(iRet==true)
    {
        printf("it is an capital character");
    }
    else
    {
        printf("it is not a capital character");
    }
    return 0;
}
