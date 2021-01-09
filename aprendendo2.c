#include <stdio.h>
#include <string.h>

int main(){
    char teste[10];
    int i = 0;
    printf("Digite uma frase qualquer: ");
    fgets(teste,20,stdin);
    printf("O tamanho da string eh: %ld\n", strlen(teste));
    printf("O tamanho da variavel eh: %ld\n",sizeof(teste));
    //if (teste[strlen(teste)-1]== 0x0A){
     //   teste[strlen(teste) -1] = '\0';
    //}
    printf("string limpa: %s", teste);
    for (i=0; i < strlen(teste); i++){
        printf("O caractere %d, corresponde a: %X\n",i,teste[i]);
    }
return (0);
}
