#include <stdio.h>
int main(void)
{

    int salario;
    int horas;
    int total;

    printf("Informe o seu solario por hora:");
    scanf("%d", &salario);
    printf("informe a sua carga horaria:");
    scanf("%d", &horas);

    if(horas>200)
        {
            total = (salario * horas) * 1.05;
        }

    else
        {
            total = salario * horas;
        }

    printf("seu salario e de %d", total);
}
