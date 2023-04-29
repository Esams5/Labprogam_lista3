#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAM 100

int main(){
    char str[TAM];
    int cont = 0;

    puts("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    while (str[cont] != '\0'){
        cont++;
    }

    printf("A string tem %d caracteres\n",cont);




    return 0;
}