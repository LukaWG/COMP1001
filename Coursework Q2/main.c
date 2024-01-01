#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void funct1();
void funct2();

int main() {
printf("\nMain started \n");

if (fork()==0)
funct2();
else if (fork()==0)
funct1();
printf("\nThis is the End (The Doors) \n");
exit(EXIT_SUCCESS);
}

void funct1() {
fork();
execlp("echo", "echo", "Cheers", "from our world !", (char*)0);
perror("execlp");
exit(EXIT_FAILURE);
}

void funct2() {
fork();
printf("\nHi from Funct2");
}