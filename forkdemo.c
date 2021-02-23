#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
 int pid=0;
  pid=fork();
  if(pid==0){
   printf("Child")
   }
   else
   printf("in parents process id of child %d);
   return 0;
   }
  
