#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MX 20
#define SFT 0
#define TAM 3

int main(){
    int v[TAM];
    int media1 = 0;
    float produto = 1;
    float media2 = 0;
    srand(time(NULL));

    for (int k = 0; k<TAM; k++){
        v[k] = SFT + rand()% MX;
    }
    puts("Vetor:");
     for (int k = 0; k<TAM; k++){
        printf("%d\n", v[k]);
    }

    for (int k = 0; k<TAM; k++){
        media1 = media1 + v[k];
    }

    for (int k = 0; k < TAM; k++){
        produto *= v[k];
    }

    media2 = pow(produto, 1.0/TAM);

    printf("Média aritimética: %d\n",media1/TAM);

    printf("Média geometrica: %.2f\n",media2);





    return 0;


}