#include <stdio.h>
#include <locale.h>

int main(){
    int *ptrX;

    setlocale(LC_ALL,"");

    ptrX = 0x00405060;

    printf("%d\n", *ptrX);
    *ptrX = 1234;
    printf("%d\n", *ptrX);

    return(0);
}
