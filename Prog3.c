#include <stdio.h>

    void main() {
        int Menu;
        float Euro = 1;
        float Dollar = 1.1;
        float CAD = 1.45;
        float final;

        printf("Escolha a opcao da taxa de cambio! \n");
        printf("[1]Euro - USD Dollar | [2]USD Dollar - Euro | [3]Euro - CAD | [4]CAD - Euro | [5]Sair \n");
        scanf("%d", &Menu);

        if (Menu == 1)
        {   
            printf("Euro? \n");
            scanf("%f" ,&Euro);
            final = Euro * Dollar;
            printf("Valor em dolares e: %0.1f Dollar \n", final);
        }
        else if (Menu == 2)
        {
            printf("Dollar? \n");
            scanf("%f", &Dollar);
            final = Dollar / Euro;
            printf("Valor em Euros e: %0.1f Euro \n", final);
        }
        else if (Menu == 3)
        {
            printf("Euro? \n");
            scanf("%f", &Euro);
            final = Euro * CAD;
            printf("Valor em CAD e: %0.1f CAD \n",final);
        }
        else if (Menu == 4)
        {
            printf("CAD? \n");
            scanf("%f", &CAD);
            final = CAD / Euro;
            printf("Valor em Euros sao: %0.1f Euro \n", final);
        }
        else
        {
            printf("Opcao invalida, Obrigado!");
        }
        
        
        
        
        

    }