#include <stdio.h>
#include <locale.h>

int main(void){
    int var, *ptrVar;

    setlocale(LC_ALL,"");
    var = 17;
    ptrVar = &var;
    printf("Endere�o de mem�ria que a vari�vel var est�: %X\n",&var);
    printf("O valor contido na vari�vel var �: %d\n",var);
    printf("Endere�o de mem�ria que a vari�vel ptrVar est�: %X\n",&ptrVar);
    printf("O valor contido na vari�vel ptrVar �: %X\n",ptrVar);
    printf("O valor contido na regi�o de mem�ria apontada pela vari�vel ptrVar �: %d\n",*ptrVar);

    printf("==================================================================================\n");
    var = 19;
    printf("==================================================================================\n");

    printf("Endere�o de mem�ria que a vari�vel var est�: %X\n",&var);
    printf("O valor contido na vari�vel var �: %d\n",var);
    printf("Endere�o de mem�ria que a vari�vel ptrVar est�: %X\n",&ptrVar);
    printf("O valor contido na vari�vel ptrVar �: %X\n",ptrVar);
    printf("O valor contido na regi�o de mem�ria apontada pela vari�vel ptrVar �: %d\n",*ptrVar);

    printf("==================================================================================\n");
    *ptrVar = 21;
    printf("==================================================================================\n");

    printf("Endere�o de mem�ria que a vari�vel var est�: %X\n",&var);
    printf("O valor contido na vari�vel var �: %d\n",var);
    printf("Endere�o de mem�ria que a vari�vel ptrVar est�: %X\n",&ptrVar);
    printf("O valor contido na vari�vel ptrVar �: %X\n",ptrVar);
    printf("O valor contido na regi�o de mem�ria apontada pela vari�vel ptrVar �: %d\n",*ptrVar);

    return(0);
}
