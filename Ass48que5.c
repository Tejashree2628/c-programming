#include<stdio.h>

void Display(int no)
{
  static char ch='a';
  if(no!=0)
  {
    printf("%c\t",ch);
    no--;
    ch++;
    Display(no);
  }

}
int main()
{
  int no=0;
  printf("enter the number to print\t");
  scanf("%d",&no);
    Display(no);
    return 0;
}
