#include<stdio.h>
#include<locale.h>

char *trocaletra(char *str,char letra_velha,char letra_nova);

int main(){
setlocale(LC_ALL,"");
char frase[100];
char letra_velha, letra_nova;
printf("Bem vindo ao ---Troca de Letra---\n");
printf("Digite a frase: ");
fgets(frase,100,stdin);
printf("Qual letra quer trocar?\n");
letra_velha = getchar();
fflush(stdin);
printf("Qual é a letra nova?\n");
letra_nova = getchar();
char *str = frase;
printf("A nova frase ficou assim: ");
printf("A nova frase ficou: %s",trocaletra(str,letra_velha,letra_nova));
return(0);
}

char * trocaletra(char *str,char letra_velha,char letra_nova){
    char *nova_palavra = str;
    while(*str != '\0'){
        if(*str == letra_velha){
            *str = letra_nova;
        }
        str++;
    }
    return(nova_palavra);
}
