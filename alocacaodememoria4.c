#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"");
    char texto[] = "Eu super amo tudo isso! Programar � legal. Mas eu odeio C ";
    char procura;
    printf("Essa � a nossa frase: %s\n", texto);
    printf("A partir de qual letra voc� quer substituir? : ");
    procura = fgetchar();
    fflush(stdin);
    char *ptrProcura;
    int num = 0;
    ptrProcura = memchr(texto, 'M', sizeof(texto));
    printf("Quantos letras quer sobrepor? : ");

    scanf("%i", num);
    memmove(ptrProcura, texto, 12);
    printf("A nova mensagem ficou assim:\n%s", texto);
    return (0);
}
