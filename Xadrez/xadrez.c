#include <stdio.h>

// Movimento da Torre

void movertorre(int casa) {
    if (casa > 0) {
        printf("Direita\n");
        movertorre(casa - 1);
    }
}

// Movimento Bispo

void moverbispo(int vertical, int horizontal) {
     int contador = 0; // controla o total de movimentos
    if (vertical == 0 || horizontal == 0)
        return;

    for (int i = 0; i < vertical; i++) { // movimento vertical
        for (int j = 0; j < horizontal; j++) { // movimento horizontal
            printf("Cima e Direita\n");
             contador++;    
    
    if (contador >= 5) // para após 5 movimentos
            break;
    
         }
        if (contador >= 5)
            break;
    }
}
    // Movimento da Rainha

void moverrainha(int casa) {
    if (casa > 0) {
        printf("Direita\n");
        moverrainha(casa - 1);
    }
}


int main () {

    int movertorreprint = 5;
    printf("\n");
    printf("=====Movimento da Torre=====\n");
    printf("\n");
    movertorre(movertorreprint);

    int casasBispoVertical = 3;
    int casasBispoHorizontal = 3;

    printf("\n");
    printf("===== Movimento do Bispo =====\n");
    printf("\n");
    moverbispo(casasBispoVertical, casasBispoHorizontal);


    int moverrainhaprint = 5;
    printf("\n");
    printf("=====Movimento da Rainha=====\n");
    printf("\n");
    moverrainha(moverrainhaprint);


// Movimento do cavalo.

    printf("\n===== Movimento do Cavalo =====\n");
    printf("\n");

    int limiteVertical = 4;
    int limiteHorizontal = 4;
    int movimentos = 0; 

    for (int i = 1; i <= limiteVertical; i++) {
        for (int j = 1; j <= limiteHorizontal; j++) {

            if ((i + j) % 2 == 0) {
                continue;
            }

            for (int k = 0; k < 2; k++) {
                printf("Cima\n");
            }
            printf("Direita\n");

            movimentos++;

            break;
        }
        if (movimentos > 0) {
            break;
        }
    }

    return 0;

    }