#include <stdio.h>

int maiorElementoRecursivo(int v[], int t)
{
    if (t == 1)
        return v[0];
    else
    {
        int x = maiorElementoRecursivo(v, t - 1);
        printf("%d\n", x);
        if (x > v[t - 1])
        {
            //printf("%d \n", x);
            return x;
        }
        else
        {
            return v[t - 1];
        }
    }
}

int main()
{
    int vetor[5] = {5, 2, 16, 3, 8};
    //int vetor[10] = {5, 2, 16, 3, 8, 7, 10, 0, 8, 12};
    int tamanho = 5;
    int maior = maiorElementoRecursivo(vetor, tamanho);

    printf(" o maior é %d", maior);

    return 0;
}
