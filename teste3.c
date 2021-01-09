#include<stdio.h>
#include<string.h>

int main(){
    char nome1[] = "sair";
    char nome2[] = "sair";
    char nome3[] = "aiouskjhnsaioujashndosuihnfdsahnfoshnd";
    char resposta[5];
    printf("--------Você quer continuar?--------\n Se sim, digite sim, se não, digite sair: ");
    //fgets(resposta,20,stdin);
    gets(resposta);
    printf("Nome 1 com nome 2 da: %i\n", strcmp(nome1,nome2));
    printf("Nome 1 com nome 3 da: %i\n", strcmp(nome1,nome3));
    printf("Nome 1 com sair da: %i\n", strcmp(nome1,"sair"));
    printf("Nome 1 com resposta da: %i\n", strcmp(nome1,resposta));

    return(0);
}
