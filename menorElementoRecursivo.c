#include <stdio.h>

int menorElementoRecursivo(int v[], int t)
{
    if (t == 1)
        return v[0];
    else
    {
        int x = menorElementoRecursivo(v, t - 1);
        if (x < v[t - 1])
            return x;
        return v[t - 1];
    }
}

int main()
{
    int vetor[10] = {5, 12, 16, 3, 8, -7, 10, 11, 8, 12};
    int tamanho = 10;
    int maior = menorElementoRecursivo(vetor, tamanho);

    printf("%d", maior);

    return 0;
}
