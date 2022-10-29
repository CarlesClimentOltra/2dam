#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {

	pid_t pid1;
	int status1, status2;
	
	if ((pid1 = fork()) == 0) {
	
		pid_t pid2;
		
		if ((pid2 = fork()) == 0) {
		
			//net
			
			printf("Soc el net (%d) fill de (%d)\n", getpid(), getppid());
		
		}
		
		else {
		
			//pare
			
			waitpid(pid2, &status1, 0);
			
			printf("Soc el pare (%d) fill de (%d)\n", getpid(), getppid());
		
		}
			
	}
	
	else {
	
		//avi
		
		waitpid(pid1, &status2, 0);
		
		printf("Soc el avi (%d) fill de (%d)\n", getpid(), getppid());
	
	}
	
	return 0;

}
