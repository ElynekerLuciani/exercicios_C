#include <stdio.h>

int totalLinha = 5;
int totalColuna = 5;

int matriz[5][5] = {
    {34, 45, 18, 56, 98},
    {88, 59, 23, 34, 44},
    {330, 32, 31, 22, 33},
    {40, 50, 210, 17, 15},
    {4, 14, 32, 11, 2200}};

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int maiorElementoMatriz(int matriz[][totalColuna], int ln, int cn)
{
    if (ln == 0 && cn == 0)
        return matriz[0][0];
    else if (ln == 0)
        return max(matriz[0][cn], maiorElementoMatriz(matriz, 0, cn - 1));
    else if (cn == 0)
        return max(matriz[ln][0], maiorElementoMatriz(matriz, ln - 1, totalColuna - 1));

    return max(matriz[ln][cn], maiorElementoMatriz(matriz, ln, cn - 1));
}

int main()
{
    printf("%d", maiorElementoMatriz(matriz, totalLinha, totalColuna));
    return 0;
}
