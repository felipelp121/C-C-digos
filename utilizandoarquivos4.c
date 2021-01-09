#include<stdio.h>
#include<stdlib.h>

int main (){
    FILE *pFile;
    long int tam;
    pFile = fopen("teste4.exe", "rb");
    if (pFile == NULL){
        printf("Não foi possivel abrir");
        exit(1);
    }
    fseek(pFile,0, SEEK_END);
    tam = ftell(pFile);
    rewind(pFile);
    printf("O tamanho do arquivo eh: %i", tam);
    fclose(pFile);

    return 0;
}
