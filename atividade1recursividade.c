#include <stdio.h>

int func();

int main(){
int total = 1;
int expoente = 4;
int base = 2;
total = func(base, expoente, total);
printf("%d", total);
}

int func(int base, int expoente, int total)
{     
    if(expoente == 0)
    {
        return(total);
    }
    if(expoente == 1)
    {
        total = total*base;
    }
    else
    {
        total = total* base;
        expoente--;
        func(base, expoente, total);
    }

}
