#include <stdio.h> 
#include <stdlib.h> 
#include <sys/types.h> 
#include <sys/wait.h> 
#include <unistd.h>

char name[20];

void getname(){//function
	printf("Enter your name: ");
	gets(name);
	
	printf("Your name is %s\n", name);
}

int main(void){
for (int i = 4; i>0; i--){//loop
	pid_t pid = fork();//fork
		if(pid == 0){			
			getname();
		}
		else{
			wait(NULL);//wait			
			if(i==1)
				printf("job is done\n");
			exit (0);
		}
}		

return EXIT_SUCCESS;
}
