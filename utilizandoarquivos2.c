#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE * pFile;
    int c;
    pFile = fopen("teste.txt", "r");
    if (pFile == NULL){
        printf("Não foi possivel abrir o arquivo ");
        exit(1);
    }
    do {
        c = fgetc(pFile);
        if (c != EOF){
            printf("%c", c);
        }
    } while(c != EOF);

    return 0;
}
