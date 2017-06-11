/*
 * C program to do the following: Using fork () create a child process.  The Child prints its own process-id and id of its parent and then  exits.  The parent process waits for its child to finish ( by executing the wait()) and prints its own process-id and the id of its child process and then exits.
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
	pid_t pid;
	
	pid = fork();
	
	if(pid < 0){
		printf("Error occured\n");
		exit(-1);
	}
	else if(pid == 0){
		printf("The Child process: ID :%d with parent ID: %d\n",getpid(), getppid());
	}	
	else{
		wait(NULL);
		printf("The parent process ID: %d has child with ID: %d\n",getpid(), pid);
		exit(0);
	}
}
