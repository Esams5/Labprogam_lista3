#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

int main(){
    char str[TAM];
    int ler, i;

    printf("Digite a string: ");
    scanf("%s",str);

    ler = strlen(str);

    for (i = ler -1; i >= 0; i--){
        printf("%c",str[i]);
    }
    printf("\n");



    return 0;
}