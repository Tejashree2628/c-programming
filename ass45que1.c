#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
  PNODE new=NULL;
  new=(PNODE)malloc(sizeof(NODE));
  new->data=no;
  new->next=NULL;
  
  if(*Head==NULL)
  {
    *Head=new;  
  }
  else
  {
    new->next=*Head;
     *Head=new;
  }

}

void Reverse(PNODE Head)
{
     int digit=0,num=0,rev;
     while(Head!=NULL)
     {
      num=Head->data;
       rev=0;
       while(num!=0)
       {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
       }
       printf("%d\t",rev);
       Head=Head->next;
     }
}

int main()
{
   PNODE first=NULL;
   int choice=1,no=0,ans=0;
   while(choice!=0)
   {
           printf("\n1: for insert at first\n");
           printf("2: display each element in reverse in linked list\n");
           printf("0: for exit\n");
           scanf("%d",&choice);
       switch(choice)
       {
       case 1:
               printf("enter the number of insert\n ");
               scanf("%d",&no);
               InsertFirst(&first,no);              
               break;
       case 2:
              Reverse(first);
               break;
       case 0:
              exit(0);
       default:
               printf("!!!enter correct choice!!!\n");
               break;
       }
   }
}