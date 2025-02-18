#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	int pid, pid1, pid2;
	pid = fork();
	if(pid == -1){
		printf("Erros in process creation\n");
		exit(1);
	}
	
	if(pid != 0){
		pid = getpid();
		printf("The parent process ID is %d\n: ", pid1);
	}
	
	else{
		pid2 = getpid();
		printf("The child process ID is %d\n: ", pid2);
	}
}
