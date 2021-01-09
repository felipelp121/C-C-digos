#include <stdio.h>
#include <stdlib.h>

int main(void){
    //char *nome = NULL;
    char palavra[] = "felipefelipefelipefelipefelipefelipefelipe";
    char *nome = malloc(sizeof(palavra));
    strcpy(nome,palavra);
    printf("Em nome: %s\n", nome);
    char *maisnome = NULL;
    maisnome =(char *) realloc(nome, sizeof(palavra)*2);
    if (maisnome == NULL){
        printf("Não foi possível realocar");
        free(nome);
        exit(1);
    }
    else{
        nome = maisnome;
    }
    strcat(nome,palavra);
    printf("Agora tem: %s\n", nome);
    free(nome);
    return(0);
}
