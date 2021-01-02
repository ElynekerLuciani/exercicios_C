#include <stdio.h>

int calculaDiagonal(int matriz[5][5])
{
    int valor = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                valor = valor + matriz[i][j];
                break;
            }
        }
    }
    return valor;
}

int main()
{
    int m[5][5] = {
        {5, 6, 7, 8, 9},
        {9, 5, 6, 7, 8},
        {8, 9, 5, 6, 7},
        {7, 8, 9, 5, 6},
        {6, 7, 8, 9, 5}};

    int valor = calculaDiagonal(m);
    printf("%d", valor);

    return 0;
}
