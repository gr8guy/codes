/* It demonstrates changes to global variable is local to the process */
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
int x=1;
main()
{
pid_t pid;
pid = fork();
if(pid ==0)
{
	printf("\nchild has x = %d\n",++x);
}
else
{
	sleep(20);
	printf("\nparent has x = %d\n",--x);
}
    printf("Bye from process %d with x = %d\n",getpid(),x);
}
	
