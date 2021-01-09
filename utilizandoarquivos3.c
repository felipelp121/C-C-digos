#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *pFile;
    FILE *pCopy;
    FILE *pByte;
    int c;
    unsigned char bytes[50];
    pFile = fopen("teste4.exe", "rb");
    if (pFile == NULL){
        printf("Ocorreu um erro");
        exit(1);
    }
    pCopy = fopen("copia.exe", "wb");
    if (pCopy == NULL){
        printf("Ocorreu um erro 2");
        exit(1);
    }
    do{
       c = fgetc(pFile);
       if (c != EOF ){
           fputc(c, pCopy);
       }

    }while(c != EOF);
    fread(bytes,sizeof(unsigned char),50, pFile);
    pByte = fopen("copiabytes.txt", "wb");
    int i;
    for (i = 0; i < 50; i++){
        fprintf(pByte," %X ",bytes[i]);
    }

    fclose(pFile);
    fclose(pCopy);
    fclose(pByte);

    return 0;
}
