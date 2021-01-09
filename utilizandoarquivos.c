#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *pFile;
    char teste[100];

    pFile = fopen("teste.txt", "r");
    if (pFile == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    fgets(teste, 100, pFile);
    //fprintf(pFile, "AAAAAAAAAAqMANEIROO");
    fclose(pFile);
    printf("%s", teste);

    return 0;
}
