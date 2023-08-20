#include <stdio.h>
int main(void)
{

    int numero;
    int contador = 0;
    int positivos = 0;
    int negativos = 0;

    while(contador < 4)
    {
        int printar;
        printar = contador + 1;

        printf("insira o numero %d \n", printar);
        scanf("%d", &numero);
        
        if(numero < 0)
        {
            negativos = negativos + 1;
        }
        else
        {
            positivos = positivos + 1;
        }
        contador ++;
    

    }
    printf("numeros positivos: %d\nnuneros negativos: %d", positivos, negativos);
}