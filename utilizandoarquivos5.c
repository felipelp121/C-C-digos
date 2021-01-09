#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
// CÓDIGO INCOMPLETO
int main(){
    setlocale(LC_ALL, "");
    FILE *pFile;
    FILE *pCopy;
    FILE *pCopy2;
    long int tam;
    int num = 0;
    int divisao = 0;
    int contador = 0;
    int c;
    pFile = fopen("teste4.exe", "rb");
    if (pFile == NULL){
        printf("Não foi possivel achar o arquivo");
        exit(1);
    }
    pCopy = fopen("copiateste11.txt", "wb");
    if (pCopy == NULL){
        printf("Copia 1 falhou!");
        exit(1);
    }
    pCopy2 = fopen("copiateste2.txt", "wb");
    if (pCopy2 == NULL){
        printf("Copia 2 falhou!");
        exit(1);
    }

    fseek(pFile, 0, SEEK_END);
    tam = ftell(pFile);
    fseek(pFile , 0 , SEEK_SET);
    printf("O tamanho do arquivo é: %i", tam);
    //printf("Você quer dividir o arquivo em quantos pedaços?");
    //scanf("%i",num);
    //divisao = tam / num;


    do{
        contador++;
        c = fgetc(pFile);
        if (c != EOF){
            fputc(c, pCopy);
        }
    }while(contador < 47);

    // função para cortar o arquivo ---------------







    fclose(pFile);



    return 0;
}
