#include <stdio.h> 
#include <stdlib.h> 
#include <sys/types.h> 
#include <sys/wait.h> 
#include <unistd.h>

char name[50];

void jobisdone(){
	printf("job is done\n");
}

int main(void){
	for (int i = 4; i >= 1; i--){
		pid_t pid = fork();
		
		if(pid == 0){			
			printf("Enter your name: ");
			gets(name);
			
			printf("Your name is %s\n", name);
		}
		
		else{
			wait(NULL);
			exit (0);
		}
	}
	
jobisdone();	
return EXIT_SUCCESS;
}
