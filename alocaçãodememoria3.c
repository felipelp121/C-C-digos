#include<stdio.h>
#include<strings.h>
#include<stdlib.h>
int main(){
    char texto[] = "FelipeFelipeFelipeFelipeFelipe";
    char *aloca = calloc(sizeof(texto), sizeof(char));
    strcpy(aloca,texto);
    printf("Em aloca tem: %s\n", aloca);
    char *aumenta = NULL;
    aumenta =(char *) realloc(aloca, sizeof(texto)*2);
    if(aumenta == NULL){
        printf("Não foi possível realocar");
    }
    else{
        aloca = aumenta;
        strcat(aloca,texto);
        printf("Depois do Realloc agora em aloca tem: %s\n",aloca);
    }

    return(0);
}
