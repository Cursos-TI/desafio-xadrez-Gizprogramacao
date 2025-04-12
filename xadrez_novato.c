#include <stdio.h>

int main(){

    int bispo = 0;
    int torre = 0;
    int rainha = 0;
    int opcao;

    printf("--- Jogando Xadrez ---\n\n");
    printf("Escolha uma peça para jogar!\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("Digite o número da peça: ");
    scanf("%d", &opcao);
    printf("\n");


switch (opcao)
{
case 1:

    printf("Movimento do Bispo!\n");
    
    while (bispo < 5)
    {
        printf("Frente Direita\n");

        bispo++;
    }
    break;

case 2:

    printf("Movimento da Torre!\n");

    do
    {
        printf("Direita\n");
        torre++;

    } while (torre < 5);

    break;

case 3:

    printf("Movimentando a Rainha!\n");

for (rainha = 0; rainha < 8; rainha++)
{
    printf("Direita\n");
}
    break;

default:
    printf("Opção inválida!");

    break;

}



    return 0;
}