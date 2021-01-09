#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct baralho{
    char marca[10];
    int numeroCartas;
};

struct cartas{
    char ident;
    char naipe[10];
    struct baralho Baralho;
};


int main(){
    setlocale(LC_ALL,"");

    return(0);
}
