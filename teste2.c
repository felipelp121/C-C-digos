#include <stdio.h>
#include <stdlib.h>
int main(void){
    char frase[]= "Ana tirou 5";
    char *nome = NULL;
    nome = malloc(sizeof(frase));
    strcpy(nome,frase);
    char saida[] = "sair";
    while(1){
        char *maisnome = (char *) realloc(nome,sizeof(frase)*2);
        printf("Digite o novo dado: ");
        gets(frase);
        if (maisnome == NULL){
            printf("Nao foi possivel realocar");
            free(nome);
            exit(1);
        }
        else{
            nome = maisnome;
            strcat(nome,frase);
            printf("A frase ficou: %s\n", nome);
        }

        if (strcmp(frase,saida)== 0){
            exit(0);
        }

       }


return 0;
}
