#include <stdio.h>

int func(int base, int expoente, int total);

int main(){
    int total = 1;
    int expoente = 1;
    int base = 4;
    total = func(base, expoente, total);
    printf("%d", total);
}

int func(int base, int expoente, int total)
{     
    if(expoente == 0)
    {
        return(total);
    }
   
    else
    {
        total = total* base;
        expoente--;
        func(base, expoente, total);
    }

}
