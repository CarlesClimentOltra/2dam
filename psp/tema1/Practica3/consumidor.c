#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

#define TAM_BUF 100
#define TRUE 1

int main() {

	int fp;
	char buffer[TAM_BUF];
	int nbytes;
	
	mkfifo("FIFO1", 0777);

	fp = open("FIFO1", O_RDONLY);

	for (int i=0; i<TAM_BUF; i++) {

		
		read(fp, &buffer[i], TAM_BUF - 1);	
		close(fp);

	}
	
	printf("%s \n", buffer);

	return 0;

}
