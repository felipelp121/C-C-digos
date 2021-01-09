#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct carta{
    char ident;
    char naipe[15];
};

int main(){
    setlocale(LC_ALL,"");
    struct carta baralho[3];

    baralho[0].ident = 'A';
    baralho[1].ident = 'J';
    baralho[2].ident = '9';
    // --------------------
    strcpy(baralho[0].naipe, "Copas");
    strcpy(baralho[1].naipe, "Ouros");
    strcpy(baralho[2].naipe, "Paus");
    //---------------------
    int i;
    for (i = 0; i < 3; i++){
        printf("O número da carta %i é : %c e O naipe da carta %i é:  %s\n", i+1, baralho[i].ident, i+1, baralho[i].naipe );
    }

    // --------Mesmo programa só que agora feito com ponteiros-----------

    struct carta *pBaralho;
    pBaralho = malloc(sizeof(struct carta));
    pBaralho->ident = '7';
    strcpy(pBaralho->naipe, "Copas");
    pBaralho++;
    pBaralho->ident = '4';
    strcpy(pBaralho->naipe, "Ouros");
    pBaralho--;
    // pode ser usado assim:
    //printf("Resultado com ponteiro:  identidade: %c , naipe: %s", pBaralho->ident, pBaralho->naipe);
    // ou assim:
    printf("Ponteiro --- identidade = %c  e naipe = %s\n", pBaralho[0].ident, pBaralho[0].naipe);
    printf("Ponteiro --- identidade = %c  e naipe = %s", pBaralho[1].ident, pBaralho[1].naipe);
    free(pBaralho);
    return (0);
}
