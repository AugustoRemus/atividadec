#include<stdio.h>
int main(void)
{

    int idade;

    printf("inisra sua idade\n");
    scanf("%d", &idade);

    if(idade > 70 || idade < 18 && idade > 15)
    {
        printf("facultativo");
    }
    else
    {

        if(idade < 16)
        {
            printf("nao pode votar");
        }
        else
        {
            printf("voto obrigatorio");
        }

    }

}