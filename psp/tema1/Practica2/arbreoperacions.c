#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {

	pid_t pidB, pidC, pidD, pidE, pidF, pidG;
	int status1, status2, status3, status4, status5, status6;
	
	int num1, num2, resultado;
	
	printf("Introduce el primer número: ");
	scanf ("%d", &num1);
	printf("Introduce el segundo número: ");
	scanf ("%d", &num2);
	
	pidB = fork();
	
	if (pidB == 0) {
	
		//padreB
	
		pidE = fork();
		
		if (pidE == 0) {
		
			//hijoE
			printf("Soc E (%d), fill de (%d) %d\n", getpid(), getppid(), num1*num1);
		
		}
		
		else {
		
			//padreB
			printf("Soc B (%d), fill de (%d) %d\n", getpid(), getppid(), num1+num2);
			
			
			if ((pidF = fork()) == 0) {
				
				//hijoF
				printf("Soc F (%d), fill de (%d) %d\n", getpid(), getppid(), num2*num2);
			
			}
			
			else if ((pidG = fork()) == 0) {

				//hijoG	
				printf("Soc G (%d), fill de (%d) %d\n", getpid(), getppid(), (num1+num2)/2);
				
			}
		
		}
		
	
	}
	
	else {
	
		//abuelo
		printf("Soc A (%d), fill de (%d) %d %d\n", getpid(), getppid(), num1, num2);
		
		waitpid(pidB, &status1, 0);
		
		if ((pidC = fork()) == 0) {
		
			//padreC
			printf("Soc C (%d), fill de (%d) %d\n", getpid(), getppid(), num1-num2);
		
		}
		
		else if ((pidD = fork()) == 0) {
		
			//padreD
			printf("Soc D (%d), fill de (%d) %d\n", getpid(), getppid(), num1*num2);
		
		}
	
	}
	
	return 0;

}
