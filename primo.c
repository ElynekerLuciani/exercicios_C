#include <stdio.h>

int main()
{
    int numero = 7;
    int resultado = 0;

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            resultado = resultado + 1;
        }
    }
    if (resultado == 2)
    {
        printf("%d é primo", numero);
        return 1; //retorna 1 se for primo
    }
    else
    {
        printf("%d não é primo", numero);
    }

    return 0; //retorna 0 se não for primo
}
