#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]){
int var, *ptrVar;
setlocale(LC_ALL,"");
var = 17;
ptrVar = &var;
printf("Endereço de memória que a variável var está: %X\n", &var);
printf("O valor contido na variável %d\n",var);
printf("Endereço de memória que a varável,")
}
