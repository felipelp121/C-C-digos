#include <stdio.h>

int strlenRafa(char *str);
int main(int argc, char *argv[]){

    if (argc<2){
        printf("Uso: %s string\n", argv[0]);
        return(0);
    }
    printf("A string varString tem %d caracteres\n",strlenRafa(argv[1]));
    return(0);
}

int strlenRafa(char *str){
    int i=0;
    while (*str!='\0'){
        i++;
        str++;
    }
    return(i);
}
