#include<stdio.h>
#include<string.h>

int main(){
char nome[] = "FelipeFelipeFelipeFelipeFelipe";
char *aloca = malloc(sizeof(nome));
strcpy(aloca,nome);
printf("O que tem em aloca eh: %s", aloca);
free(aloca);

return(0);
}
