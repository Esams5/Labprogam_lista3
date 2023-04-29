#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[100], car;
    int tam, found = 0;
    printf("Digite uma sting: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite um caracter: ");
    scanf("%c",&car);

    tam = strlen(str);

    for (int i = 0; i < tam; i++){
        if (str[i] == car){
            found = 1;
            break;
        }
    }

    if (found == 1){
        printf("A string contém o caractere '%c'\n", car);
    } 
    else{
        printf("A string não contém o caractere '%c'\n", car);
    }


    return 0;
}