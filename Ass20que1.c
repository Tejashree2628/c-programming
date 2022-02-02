#include <stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if(((ch>='A') &&(ch<='Z')) || ((ch>='a') &&(ch<='z')))
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
    iRet=ChkAlpha(ch);
    if(iRet==true)
    {
        printf("it is an character");
    }
    else
    {
        printf("it is not a character");
    }
    return 0;
}
