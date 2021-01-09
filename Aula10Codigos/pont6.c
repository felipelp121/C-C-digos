#include <stdio.h>
#include <locale.h>

char * trocaLetra(char *str, char letravelha, char letranova);
void preenchezero(char *ptr, unsigned int num);
int main(int argc, char *argv[]){
    char str[100];
    char letravelha, letranova;

    setlocale(LC_ALL,"");
    printf("Digite uma string qualquer: \n");
    fgets(str, 100, stdin);
    printf("Digite a letra a ser trocada: \n");
    letravelha = getchar();
    //scanf("%c",&letravelha);
    getchar();
    printf("Digite a letra nova que substituirá a velha: \n");
    letranova = getchar();
    //scanf("%c",&letranova);


    printf("A string digitada foi: %s\n",str);
    printf("A string nova ficou: %s\n",trocaLetra(str,letravelha,letranova));
    return(0);
}

void preenchezero(char *ptr, unsigned int num){
    unsigned int i;
    for (i=0; i<num; i++){
        *ptr = '\0'; //é a mesma coisa que *ptr = 0;
        ptr++;
    }
}

char * trocaLetra(char *str, char letravelha, char letranova){
    char *inicio = str;
    while (*str!='\0'){
        if (*str==letravelha)
            *str = letranova;
        str++;
    }
    return(inicio);
}
