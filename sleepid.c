#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void main(){
	int pid=fork();
	if (pid==0){
		printf("\n Child Process\n");
		printf("\n Child Process id is %d",getpid());
		printf("\n Its parent process id is %d", getppid());
		sleep(5);
		printf("Child process after sleep=5\n");
		printf("\n Child Process id is %d",getpid());
		printf("\n Its parent process id is %d", getppid());
	}
	else {
		printf("\nParent process");
		sleep(10);
		printf("\n Child process id is %d", getpid());
		printf("\n Its parent process id is %d", getppid());
		printf("\nParent terminates\n");
	}
}
