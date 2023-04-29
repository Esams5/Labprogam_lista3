#include <stdio.h>
#include <string.h>

#define TAM 100

int main(){
    char str1[TAM], str2[TAM];
    
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    
    // Versão com uso da função strcat()
    strcat(str1, str2);
    printf("Versão com strcat(): %s\n", str1);
    
    // Versão sem uso da função strcat()
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    for (int i = 0; i < len2; i++) {
        str1[len1 + i] = str2[i];
    }
    
    str1[len1 + len2] = '\0';
    printf("Versão sem strcat(): %s\n", str1);
    
    return 0;
}
