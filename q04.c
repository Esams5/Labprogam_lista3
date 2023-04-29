#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100
int main(){

    char str1[TAM], str2[TAM];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);
    //com o comando strcmp

    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    // sem o comando strcmp

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)){
        printf("As strings são diferentes.\n");
        return 0;
    }

    int valida = 0;

    for (int i = 0; str1[i] != '\0'; i++){
        if (str1[i] != str2[i]) {
            valida = 1;
            break;
        }
    }


     if (valida == 0){
        printf("As strings são iguais.\n");
    } 
    else{
        printf("As strings são diferentes.\n");
    }

    return 0;
}
