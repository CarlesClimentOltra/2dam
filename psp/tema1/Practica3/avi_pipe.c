#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
void main()
{
pid_t pid, fill_pid, pid2, fill2_pid;
int fd1[2];
int fd2[2];
char saludoavi[] = "Salutacions de l'avi..\n";
char saludonet[] = "Salutacions del net..\n";
char buffer[80] = "";
pipe(fd1);
pipe(fd2);
pid = fork(); //Soc l'avi cree al pare
if (pid == -1)
{ //error
printf("No s'ha pogut crear el procés pare...\n");
exit(-1);
}
if (pid == 0)
{ //estem al procés pare
pid2 = fork(); //Soc el pare, cree a net
switch (pid2)
{
case -1: //error
printf("No s'ha pogut crear el procés NET en el PARE");
exit(-1);
break;
case 0: //procés NET
//net reb
close(fd2[1]); //tanca descriptor escriptura
read(fd2[0], buffer, sizeof(buffer)); //llig el pipe
printf("NET reb missatge de PARE: %s\n", buffer);
//net envia
printf("NET envia missatge a PARE..\n");
close(fd1[0]);
write(fd1[1], saludonet, strlen(saludonet)); //escriu el pipe
break;
default: //procés PARE
//pare reb de avi
close(fd1[1]); //tanca descriptor escriptura
read(fd1[0], buffer, sizeof(buffer)); //llig el pipe
printf("PARE reb missatge de AVI: %s\n", buffer);
//pare envia a net
printf("PARE envia missatge a NET..\n");
close(fd2[0]);
write(fd2[1], buffer, strlen(buffer)); //escriu el pipe
fill2_pid = wait(NULL); //Espera a finalització del fill
//pare reb de net
close(fd1[1]); //tanca descriptor escriptura
read(fd1[0], buffer, sizeof(buffer)); //llig el pipe
printf("PARE reb missatge de NET: %s\n", buffer);
//pare envia a avi
printf("PARE envia missatge a AVI...\n");
close(fd2[0]);
write(fd2[1], buffer, strlen(buffer)); //escriu el pipe
} //fi casos fill (pare de net)
} //fi procés fill
else
{ //procés AVI
//avi envia
printf("AVI envia missatge a PARE..\n");
close(fd1[0]);
write(fd1[1], saludoavi, strlen(saludoavi)); //escriu el pipe
fill_pid = wait(NULL); //Espera a la finalització del fill
//pare reb
close(fd1[1]); //tanca descriptor escriptura
read(fd2[0], buffer, sizeof(buffer)); //llig el pipe
printf("AVI reb missatge de PARE: %s\n", buffer);
} //fi procés avi
exit(0);
}
