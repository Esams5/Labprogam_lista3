#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

int main(){
    float v[TAM];
    float maior, menor;


    for (int k = 0; k<TAM; k++){
        printf("Digite o %d elemento:\n",k+1);
        scanf("%f", &v[k]);
    }

    maior = v[0];
    menor = v[0];

    for (int k = 1; k < TAM; k++) {
        if (v[k] > maior) {
            maior = v[k];
        }
        if (v[k] < menor) {
            menor = v[k];
        }
    }

     printf("A soma do maior e menor elemento do vetor é: %.2f\n", maior+menor);



    return 0;
}