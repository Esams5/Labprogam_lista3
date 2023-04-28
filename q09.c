#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 3

#define MX 100
#define SFT 0

int main(){
    int v[LIN][COL];

    srand(time(NULL));

    
    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            v[k][j] = SFT + rand()%MX;
        }
    }

    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            printf("%d ",v[k][j]);
        }
        printf("\n");
    }

    int somar = 0;
    printf("Diagonal principal:\n");

    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            if(k == j){
                printf("%d",v[k][j]);

            }
        }
        printf("\n");
    }
    
    


    return 0;
}