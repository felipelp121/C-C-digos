#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
int escolha = 0;
int calculadora(void){
    int num1, num2;
    num1 = num2 = 0;
    char opera = 0;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o operador: ");
    scanf(" %c", &opera);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    if (opera == '+'){
        return (num1 + num2);
    }
    if (opera == '-'){
        return(num1 - num2);
    }
    if (opera == '*'){
        return(num1 * num2);
    }
    if (opera == '/'){
        return(num1 / num2);
    }
    if (opera == '%'){
        return(num1 % num2);
    }
    else{
        return (010);
    }
}

int tamanhodonome(){
    char nome[80];
    int tamanho, z, x, tamanhonovo;
    tamanho = z = x = tamanhonovo = 0;
    for (z = 0; z<80;z++){
        nome[z] = '\0';
    }
    printf("Digite seu nome: ");
    fflush(stdin);
    fgets(nome,80,stdin);
    tamanhonovo = tamanho = strlen(nome);
    for (x=0;x<tamanho;x++){
        //printf("%c\n", nome[x]);
        if (nome[x]== 0x20 || nome[x] == 0xA){
            tamanhonovo--;
        }
    }
        return(tamanhonovo);
}

int invertepalavra(){
    char palavra[80];
    int z, tamanhodonome;
    z = tamanhodonome = 0;
    fflush(stdin);
    fgets(palavra,80,stdin);
    tamanhodonome = strlen(palavra);
    printf("Seu nome invertido é: ");
    for (z = tamanhodonome;z>=0;z--){
        printf("%c",palavra[z]);
    }
    printf("\n");
    return(0);
}

char *trocaletra(char *str, char letra_velha, char letra_nova){
    char *novo = str;
    while (*str != '\0'){
        if (*str == letra_velha){
            *str = letra_nova;
        }
        *str++;
    }
    return(novo);
}

int main(void){
    setlocale(LC_ALL, "");
    while (escolha != 9){
    int valor = 0;
    int varcoringa = 0;
    printf("O que deseja fazer? \n");
    printf("Digite o número correspondente ao seu interesse: \n1-Calculadora\n2-Descobrir tamanho do seu nome\n3-Inverte seu nome\n4-Troca Letras\n9-Sair\n");
    printf("Digite a sua escolha: ");
    scanf("%d",&escolha);
    printf("Você escolheu o número: %d\n", escolha);
    if (escolha == 1){
        int resultado = calculadora();
            if (resultado == 010){printf("Ocorreu algum erro \n");}
            else{
            printf("O resultado é: %d\n",resultado);
            printf("-------------------\n-------------------\n");
            }
    }
    if (escolha == 2){
        valor = tamanhodonome();
        printf("O tamanho do seu nome é: %i\n",valor);
        printf("-------------------\n-------------------\n");
    }
    if (escolha == 3){
       printf("Digite seu nome: ");
       invertepalavra();
       printf("-------------------\n-------------------\n");
    }

    if (escolha == 4){
        char palavra[100];
        char letra_velha, letra_nova;
        printf("Digite uma frase: ");
        fflush(stdin);
        fgets(palavra,100,stdin);
        printf("Digite a letra que quer substituir: ");
        letra_velha = getchar();
        getchar();
        printf("Digite a letra nova: ");
        letra_nova = getchar();
        printf("A frase que digitou foi essa: %s\n", palavra);
        printf("A frase nova é: %s\n", trocaletra(palavra,letra_velha,letra_nova));
        printf("-------------------\n-------------------\n");
    }

    }
    printf("\n----------Programa Finalizado com sucesso-------------");
    return(0);}



