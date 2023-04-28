#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 3

#define MX 10
#define SFT 0

int main(){
    int v[LIN][COL];
    srand(time(NULL));

    for (int i = 0; i<LIN; i++){
        for (int k = 0; k<COL; k++){
            v[i][k] = SFT + rand() % MX;
        }
    }

    int x;
    int cont = 0;
    puts("Digite o valor de x: ");
    scanf("%d",&x);

    for (int i = 0; i<LIN; i++){
        for (int k = 0; k<COL; k++){
            if (v[i][k] == x){
                cont += 1;
            }
        }
    }

    printf("O número de vez que %d aparece é %d\n",x, cont);
    printf("Matriz abaixo:\n");

    for (int i = 0; i<LIN; i++){
        for (int k = 0; k<COL; k++){
            printf("%d ",v[i][k]);
        }
        printf("\n");
    }


    return 0;
}