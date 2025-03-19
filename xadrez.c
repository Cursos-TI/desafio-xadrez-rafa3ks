#include <stdio.h>

int main() {

//variaveis das movimeentações das peças
int movimentacaoT;
int movimentacaoB = 1;
int movimentacaoRA = 1;
int movimentacaoCa1 = 1;
int movimentacaoCA2 = 1;

//FOR para movimentação da Torre
printf("***Movimentação da Torre*** \n");
for (movimentacaoT = 1; movimentacaoT <= 5; movimentacaoT++)//movimentação para a direita da torre
{
    //print da movimentação da torre
   printf("Torre se movimentou: %dX para a direita  \n", movimentacaoT);
}

//espaçamento de uma peça para outra
printf("   \n");

//WHILE para movimentação do bispo
printf("***Movimentação do Bispo***  \n");//movimentação em diagonal do bispo
while (movimentacaoB<=5)
{
    //print da movimentação do bispo
    printf("Bispo se movimentou: %dX para direita,cima  \n", movimentacaoB);
    movimentacaoB++;
}

//espaçamento de uma peça para outra
printf("  \n");

//DO WHILE para movimentação da rainha
printf("***Movimentação da rainha***  \n");
do//movimentação para a esquerda da rainha
{
    //print da movimentação da rainha
    printf("Rainha se movimentou: %dX para a esquerda  \n", movimentacaoRA);
    movimentacaoRA++;
} while (movimentacaoRA<=8);

//espaçamento de uma peça para outra
printf("  \n");

//Loops aninhados para movimentação do Cavalo
printf("***Movimentação do Cavalo***  \n");
for ( movimentacaoCa1 ; movimentacaoCa1 < 2; movimentacaoCa1++)//movimentação para a esquerda
{
    while (movimentacaoCA2 <= 2)//movimentação para baixo
    {
        //print da movimentação para baixo
        printf("Cavalo se movimentou: %dX para baixo  \n", movimentacaoCA2);
        movimentacaoCA2++;
    }
    //print da movimentação para a esqueda
    printf("Cavalo se movimentou: %dX para esquerda  \n", movimentacaoCa1);
}

printf("***Encerramento do programa***  \n");




    return 0;
}
