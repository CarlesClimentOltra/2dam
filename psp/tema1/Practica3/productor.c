#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int main() {

	int fp;
	char texto[100];
	char c;
	int i = 0;
	
	do {
	
		scanf("%c", &c);
		texto[i] = c;
		i++;
	} while(c!='.' || i==99);
	
	texto[i] = '\0';
	
	fp = open("FIFO1", O_WRONLY);

	if (fp == -1) {

		printf("ERROR AL ABRIR fitxer\n");
		exit(1);
	
	}

	for (int g=0; g<i; g++) {
	
		write(fp, &texto[g], texto[g]-1);
		
	}

	printf("Todo correcto...\n");
	//write(fp, &texto[100], strlen(texto));
	close(fp);
	
	return 0;

}


