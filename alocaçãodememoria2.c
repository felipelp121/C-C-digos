#include<stdio.h>
#include<string.h>

int main(){
char texto[] = "FelipeFelipeFelipeFelipeFelipe";
char *aloca = calloc(sizeof(texto),sizeof(char));
strcpy(aloca,texto);
printf("Mensagem em aloca eh: %s",aloca);
free(aloca);
return(0);
}
