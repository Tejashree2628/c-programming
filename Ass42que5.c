#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void DisplayN(char fname[],int ivalue)
{
    int fd=0,iret=0;
    char buffer[50];
    fd=open(fname,O_RDONLY);
   if(fd==-1)
  {
   printf("unable to open");
   exit(0);
  } 
    lseek(fd,0,0);
    iret=read(fd,buffer,ivalue);
   {
     write(1,buffer,iret);
   }
   close(fd);
}

int main()
{
int ians=0,ivalue;
char fname[20];
printf("enter the name of file");
scanf("%s",fname);

printf("enter the number for print");
scanf(" %d",&ivalue);
DisplayN(fname,ivalue);

}