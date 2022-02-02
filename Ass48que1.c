#include<stdio.h>

void Display(int no)
{
  static int i=1;
  if(i<=no)
  {
    printf("*\t");
    i++;
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
