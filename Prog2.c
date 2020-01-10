#include <stdio.h>

int main(){
    int ValorX;
    int ValorY;
    int soma;

    printf("Insira o valor de X: \n");
    scanf("%d", &ValorX);

    printf("Insira o valor de Y: \n");
    scanf("%d", &ValorY);

    soma = ValorX + ValorY ;
    
    printf("Valor X + Y = %d \n",soma);

    //printf("Qual o valor maior X ou Y? \n")//

    if (ValorX == ValorY)
    {
        printf("Ambos os valores de X e Y sao iguais \n");
    }
    else if (ValorY > ValorX)
    {
        printf("O numero Y e maior que o numero X \n");
    }
    else
    {
        printf("O numero X e maior que o numero Y \n");
    }
    return 0;
    
}