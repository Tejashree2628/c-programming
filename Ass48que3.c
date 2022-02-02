#include<stdio.h>

void Display(int no)
{
  if(no!=0)
  {
    printf("%d\t",no);
    no--;
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
