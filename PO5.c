#include <stdio.h>
int main(void)
{

    int posicao;

    printf("informe sua posicao:\n");
    scanf("%d", &posicao);

    if (posicao<= 5)
    {
        printf("Top 5");
    }
    else
    {
        if (posicao<=10)
        {
            printf("top 10");
        }
        else
        {
            if (posicao <= 20)
            {
                printf("top 20");
            }
            else
            {
                if (posicao<= 30)
                {
                    printf("Top 30");

                }
                else
                {
                    printf("top 100");
                }
            }
        }
    }

}