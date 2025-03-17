#include <stdio.h>

int main() {

int movimentacaoT;
int movimentacaoB = 1;
int movimentacaoRA = 1;

//FOR para movimentação da Torre
printf("***Movimentação da Torre*** \n");
for (movimentacaoT = 1; movimentacaoT <= 5; movimentacaoT++)
{
   printf("Torre se movimentou: %dX para a direita  \n", movimentacaoT);
}

printf("   \n");

//WHILE para movimentação do bispo
printf("***Movimentação do Bispo***  \n");
while (movimentacaoB<=5)
{
    printf("Bispo se movimentou: %dX para direita,cima  \n", movimentacaoB);
    movimentacaoB++;
}

printf("  \n");

//DO WHILE para movimentação da rainha
printf("***Movimentação da rainha***  \n");
do
{
    printf("Rainha se movimentou: %dX para a esquerda  \n", movimentacaoRA);
    movimentacaoRA++;
} while (movimentacaoRA<=8);



    return 0;
}
