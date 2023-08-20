#include <stdio.h>
int main(void)
{
    int inicio;
    int fim;
    

    printf("inisira o horario de inicio do evento:\n");
    scanf("%d", &inicio);

    printf("insira o horario do termino do evento:\n");
    scanf("%d", &fim);

    if(fim<inicio)
    {
        fim = fim + 24;
    }

    fim = fim - inicio;

    printf("o evento durou %d horas", fim);
}