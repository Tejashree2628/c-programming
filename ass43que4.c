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

int Maximum(PNODE Head)
{
     int i=0,Max=Head->data;
     while(Head!=NULL)
     {
        if(Max<Head->data)
        {
          Max=Head->data;
        }
        Head=Head->next;
     }
     return Max;
}

int main()
{
   PNODE first=NULL;
   int choice=1,no=0,result=0;
   while(choice!=0)
   {
           printf("1: for insert at first\n");
           printf("2: display maximum from all elements\n");
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
              result = Maximum(first);
              printf("Maximum element is\t%d\n",result);
               break;
       case 0:
              exit(0);
       default:
               printf("!!!enter correct choice!!!\n");
               break;
       }
   }
}