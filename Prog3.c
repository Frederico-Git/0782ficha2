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
            final = Euro * Dollar;
            printf("%0.1 fEuro e %0.1 fDollar", Euro,Dollar);
        }
        else if (Menu == 2)
        {
            final = Dollar * Euro;
            printf("%0.1 fDollar e %0.1 fEuro", Dollar,Euro);
        }
        else if (Menu == 3)
        {
            final = Euro * CAD;
            printf("%0.1 fEuro e %0.1 fCAD",Euro,CAD);
        }
        else if (Menu == 4)
        {
            final = CAD * Euro;
            printf("%0.1 fCAD e %0.1 fEuro", CAD,Euro);
        }
        else
        {
            printf("Opcao invalida, Obrigado!");
        }
        
        
        
        
        

    }