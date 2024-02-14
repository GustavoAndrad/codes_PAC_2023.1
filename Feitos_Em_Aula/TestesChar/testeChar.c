#include <stdio.h>
#include <string.h>

int main(){
    char c1 = 'A';
    char c2 = '\n';
    char nome1[8] = {'\n','R','E','N','A','T','O',0};
    char nome2[] = {'\n','R','E','N','A','T','O',0};
    char nome3[] = "\nRENATO\n";

    printf("%c%c%s%s%s", c1,c2,nome1,nome2,nome3);

    char* nomeUm  = "Renato";
    char* nomeDois = "Renata";


    if(strcmp(nome1,nome2)==0); //if(nomeUm==nomeDois);
    if(strcmp(nome1,nome2)>0); //if(nomeUm>nomeDois);
    if(strcmp(nome1,nome2)<0); //if(nomeUm<nomeDois);

    strlen(nomeUm); // Comprimento da string
}