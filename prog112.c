#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//#include<io.h>
#include<fcntl.h>
int main()
{
  int fd=0,iRet=0,iRet2=0;
  char fname[30];
  char content[6];
  printf("enter file name");
  scanf("%s",fname);
  fd=open(fname,O_RDWR); 
 
 if(fd==-1)
 {
   printf("unable to open file");
   return -1;   //return to OS
 }
 else
 {
   printf("file succesfully open with:%d\n",fd);
   
 }
 
 read(fd,content,6);
  printf("content is:%s",content);

return 0;
}