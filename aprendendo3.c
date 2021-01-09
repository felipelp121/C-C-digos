#include <stdio.h>
#include <string.h>
int main (void){
    char destino[80]="Estudar programação eh muito bom";
    char origem[]="hahaha mas eu to rindo a toa";
    printf("char destino eh: %s\nchar origem eh: %s\n", destino, origem);
    strcpy(destino, origem);
    printf("Depois da modificacao: \n");
    printf("char destino eh: %s\nchar origem eh: %s\n", destino, origem);
    printf("Usando o String cat: \n");
    strncat(destino, origem, 10);
    puts(destino);
    puts(origem);

    return 0;
}
