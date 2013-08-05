/* This program returns status 10 for child process to parent process on exiting. */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


main ()
{

  pid_t pid;
  int rv = 10;

  pid = fork ();
  
    if(pid == 0)
    {	
      printf (" CHILD: This is the child process!\n");
      printf (" CHILD: My PID is %d\n", getpid ());
      printf (" CHILD: My parent's PID is %d\n", getppid ());
      printf (" CHILD: exiting\n");
      exit (rv/0);/*Child exited and returning the status code as in variable rv*/    }  
    else
	{
	    printf ("PARENT: This is the parent process!\n");
            printf ("PARENT: My PID is %d\n", getpid ());
            printf ("PARENT: My child's PID is %d\n", pid);
            printf ("PARENT: I'm now waiting for my child to exit()...\n");
      
            wait(&rv);  /*Waiting for the child's exit */
            printf ("PARENT: My child's exit status is: %d\n", WTERMSIG(rv));
            printf ("PARENT: I am exiting\n");
    }

}
