#include<stdio.h>

void Display()
{
  static int i=6;
  static char ch='A';
  if(i!=0)
  {
    printf("%c\t",ch);
    i--;
    ch++;
    Display();
  }

}
int main()
{
    Display();
    return 0;
}
