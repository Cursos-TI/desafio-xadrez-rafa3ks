#include <stdio.h>

int main() {

    int movimentoT;
    int movimentoB=1;
    int movimentoRA=0;


    //ultilização do FOR para movimentação da torre
    printf("Movimentação da torre:")
    for(movimentoT=1;movimentoT<=5;movimentoT++){
        printf("Torre se moveu: %dX para direita \n", movimentoT);
    }
    
    printf("  \n");

    //ultilização do WHILE para movimentação do bispo
    While(movimentoB<=5){
        printf("Bispo se moveu: %dX para Cima,Direita \n", movimentoB);
        movimentoB++
    }

    printf("  \n");

    do{
        printf("Rainha e moveu: %dX para esquerda \n", movimentoRA);
        movimentoRA++
    }While(movimentoRA<=8);

    return 0;
}
