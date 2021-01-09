#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"");
    char texto[80];
    char *recebe = NULL;
    char *aloca = NULL;
    memset(texto, '\0', sizeof(char)*80);
    printf("--------Bem vindo a Entrada de Dados-------- \n --------Digite os nomes para por no banco de dados a seguir--------\n");
    char resposta[5];
    int i = 1;
    int contador = 0;
    while (strcmp(resposta,"sair")){
        contador++;
        memset(resposta,'\0',sizeof(char)*7);
        printf("Digite o nome: ");
        fgets(texto,80,stdin);
        fflush(stdin);
        printf("--------Você quer continuar?--------\n Se sim, digite sim, se não, digite sair: ");
        fgets(resposta,5,stdin);
        fflush(stdin);
        if (contador == 1)
            recebe = calloc (sizeof(texto), sizeof(char));

        aloca = (char *)realloc(recebe, sizeof(texto)*contador);
        if (aloca == NULL)
            printf("Não foi possível realocar");
        else{
                recebe = aloca;
                strcat(recebe,texto);
                printf("Recebe está assim: %s\n", recebe);
        }
    }
    free(aloca);
    free(recebe);
    return(0);
}
