#include<stdio.h>
#include<locale.h>
#include<string.h>

void preenchezero(char *texto, unsigned int x){
    int i = 0;
    for (i=0;i<x;i++){
        *texto = '\0';
        texto++;
    }
}

char invertepalavra(char *palavra){
    int marcador = 0;
    while(*palavra!='\0'){
        marcador++;
        palavra++;
    }

    int x =0;
    for (x;x<=marcador;x++){
        printf("%s",palavra);
        *palavra = '\0';
        palavra--;

    }
}


int main(){
setlocale(LC_ALL,"");
char frase[100];
preenchezero(frase,100);
printf("Bem vindo ao inverte palavras\n");
printf("Digite a frase ou a palavra a ser invertida: ");
fgets(frase,100,stdin);
printf("A frase invertida ficou assim: %s", invertepalavra(frase));

return(0);
}
