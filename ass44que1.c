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

void DisplayPerfect(PNODE Head)
{
     int i=0;
     while(Head!=NULL)
     {
       int sum=1;
       for(i=2;i<=Head->data/2;i++)  
       {
         if(Head->data%i==0)
         {
           sum=sum+i;
         }
       }  
       if(Head->data==sum)
       {
        printf("%d\t",Head->data);
       }    
       Head=Head->next;
     }
}

int main()
{
   PNODE first=NULL;
   int choice=1,no=0;
   while(choice!=0)
   {
           printf("\n1: for insert at first\n");
           printf("2: display perfect elements\n");
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
              DisplayPerfect(first);
               break;
       case 0:
              exit(0);
       default:
               printf("!!!enter correct choice!!!\n");
               break;
       }
   }
}