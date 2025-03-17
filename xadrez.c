#include <stdio.h>

int main() {

    int i;
    int movimentoB=1;
    int movimentoRA=0;


    //ultilização do FOR para movimentação da torre
    printf("Movimentação da torre:")
    for (i=1;i<=5;i++)
    {
        printf("Torre se moveu: %dX para direita \n", i);
    }

    
    printf("  \n");

    //ultilização do WHILE para movimentação do bispo
    while (movimentoB<=5)
    {
        printf("Bispo se moveu: %dX para Cima,Direita \n", movimentoB);
        movimentoB++
    }


    printf("  \n");

    do
    {
        printf("Rainha e moveu: %dX para esquerda \n", movimentoRA);
        movimentoRA++
    } while (movimentoRA<=8);

    
    return 0;
}
