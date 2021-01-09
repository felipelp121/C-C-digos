#include <stdio.h>
#include <locale.h>

int main(void){
    int var, *ptrVar;

    setlocale(LC_ALL,"");
    var = 17;
    ptrVar = &var;
    printf("Endereço de memória que a variável var está: %X\n",&var);
    printf("O valor contido na variável var é: %d\n",var);
    printf("Endereço de memória que a variável ptrVar está: %X\n",&ptrVar);
    printf("O valor contido na variável ptrVar é: %X\n",ptrVar);
    printf("O valor contido na região de memória apontada pela variável ptrVar é: %d\n",*ptrVar);

    printf("==================================================================================\n");
    var = 19;
    printf("==================================================================================\n");

    printf("Endereço de memória que a variável var está: %X\n",&var);
    printf("O valor contido na variável var é: %d\n",var);
    printf("Endereço de memória que a variável ptrVar está: %X\n",&ptrVar);
    printf("O valor contido na variável ptrVar é: %X\n",ptrVar);
    printf("O valor contido na região de memória apontada pela variável ptrVar é: %d\n",*ptrVar);

    printf("==================================================================================\n");
    *ptrVar = 21;
    printf("==================================================================================\n");

    printf("Endereço de memória que a variável var está: %X\n",&var);
    printf("O valor contido na variável var é: %d\n",var);
    printf("Endereço de memória que a variável ptrVar está: %X\n",&ptrVar);
    printf("O valor contido na variável ptrVar é: %X\n",ptrVar);
    printf("O valor contido na região de memória apontada pela variável ptrVar é: %d\n",*ptrVar);

    return(0);
}
