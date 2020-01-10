#include <stdio.h>

int main (void){
    float n1;
    int menu;
    float libras = 2.2;
    float kg = 1;
    float final;

    printf(" Insira [1] para converter de KG para LB, qualquer outro numero resulta de LB para KG \n");
    scanf("%d",&menu);

    printf("Insira a media \n");
    scanf("f", &n1);
    
    if(menu=1) {
        final = n1 * libras
        printf("%.1 fkg e %.1fLB \n",n1,final);
    }else
    {
        final = n1/libras
        printf("%.1fLB e %.1fKG \n", n1, final);
    }
    

}