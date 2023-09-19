#include <stdio.h>

int func(int lista[], int total, int tamanho);

int main()
{
    int lista[] = {3, 3, 3, 4};
    int tamanho = 4;
    int total = 0;
    total = func(lista, total, tamanho);
    printf("%d", total);
}

int func(int lista[], int total, int tamanho)
{     
    if (tamanho == 0)
        return(total);
    else
    {
        tamanho--;
        total = total + lista[tamanho];
        func(lista, total, tamanho);
    }
   
   

}
