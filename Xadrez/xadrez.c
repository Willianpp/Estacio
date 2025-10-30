#include <stdio.h>

int main (){

int torre = 1, bispo = 1, rainha, cavalo, movimentacaocavalo = 1;

// Torre se move para a direita 5 vezes.
printf("=====Movimento da Torre=====\n");
while (torre <= 5)
{
    printf("Direita\n"); // Imprimi a direção do movimento
    torre++;
}

// Bispo de move em diagonal para frente 5 vezes.
printf("=====Movimento do Bispo=====\n");
do {
    printf("Cima\n");
    printf("Direita\n");
    bispo++;
} while (bispo <= 5);

// Rainha de move para esquerda 8 vezes.
printf("=====Movimento da Rainha=====\n");
for (rainha = 1; rainha <= 8; rainha++)
{
    printf("Esquerda\n"); // Imprimi a direção do movimento
}   

// Cavalo de move para cima e para direita uma vez.
printf("=====Movimento do Cavalo=====\n");

    while(movimentacaocavalo--){
        for(int cavalo = 0; cavalo <= 1; cavalo++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }

return 0;
}