#include <stdio.h>
int main(void)
{
    float preco;
    float pagamento;

    printf("insira quanto custa o produto:");
    scanf("%f", &preco);
    printf("escolha a forma de pagamento:");
    scanf("%f", &pagamento);

    if(pagamento == 1)
    {
        preco = preco * 0.95;
    }
    else        
    {
        if(pagamento == 2)
        {
            preco = preco * 1.1;
        }
        else
        {
            printf("metodo de pagamento nao disponivel");
        }
    }

    printf("o custo do produto sera de %.2f reais", preco);
}