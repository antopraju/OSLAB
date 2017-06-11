/*
 * Write a C program using Process system call(fork, exit)
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
	pid_t pid;
	int i;
	
	for(i = 0; i < 3; i++){
		pid = fork();
		
		if(pid < 0){
			printf("Error occurred\n");
			exit(-1);
		}
		else if(pid == 0){
			printf("The Child process(%d) is created:%d\n",i + 1, getpid());
		}
		else{
			wait(NULL);
			if(i == 2)
			printf("---------------------------------------------------\n");
			printf("The Child Process(%d) is completed\n", i + 1);
			exit(0);
		}
	}
}
