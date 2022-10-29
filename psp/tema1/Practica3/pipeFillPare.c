#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

int main() {

	int fd[2];
	char buffer[30];
	pid_t pid;
	
	pipe(fd); //crea el pipe
	pid = fork(); //crea un FILL

	switch (pid) {

		case -1: //error
			printf("No s'ha pogut crear el FILL\n");
			exit(-1);
			break;

		case 0: //FILL
			printf("FILL escrivint al pipe...\n");
			write(fd[1], "Hola papi", 10);
			break;

		default: //PARE
			wait(NULL); //PARE espera fill acabe escriure
			printf("PARE llegint del pipe...\n");
			read(fd[0], buffer, 24);
			printf("\tMissatge llegit: %s\n", buffer);
			break;

	} //fi switch

}
