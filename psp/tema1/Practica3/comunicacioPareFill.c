#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <string.h>

int main() {

	char buffer[30];
	int fd, status, bytesllegits;
	int numero1, numero2, resultado;
	pid_t pid;
	
	fd = open("comunicacio.txt", O_WRONLY);
	
	if (fd == -1) {
	
		printf("ERROR a l'obrir un fitxer");
		exit(-1);
	
	}
	
	if ((pid = fork()) == 0) {
	
		//Procés fill
		
		waitpid(pid, &status, 0);
		
		fd = open("comunicacio.txt", O_RDONLY);
		printf("FILL > Contingut del ficher: \n");
		
		bytesllegits = read(fd, buffer, 30);
		
		while (bytesllegits != 0) {
		
			printf("%s", buffer);
			bytesllegits = read(fd, buffer, 1);
		
		}
		
		close(fd);
	
	}
	
	else {
	
		//Procés pare
	
		printf("PARE > Escric el resultat al fitxer... \n");
		numero1 = 6;
		numero2 = 2;
		resultado = numero1*numero2;
		
		char resultadoS[] += (char) resultado;
		write(fd, resultadoS, strlen(resultadoS));
		close(fd);
	
	}

}
