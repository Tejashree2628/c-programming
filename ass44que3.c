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

int SumEven(PNODE Head)
{
     int sum=0;
     while(Head!=NULL)
     {
        if(Head->data%2==0)
        {
          sum=sum+Head->data;        
        }    
       Head=Head->next;
     }
     return sum;
}

int main()
{
   PNODE first=NULL;
   int choice=1,no=0,ans=0;
   while(choice!=0)
   {
           printf("\n1: for insert at first\n");
           printf("2: display sum of even numbers\n");
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
              ans=SumEven(first);
              printf("sum of even number is\t%d\n",ans);
               break;
       case 0:
              exit(0);
       default:
               printf("!!!enter correct choice!!!\n");
               break;
       }
   }
}