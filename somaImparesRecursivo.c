#include <stdio.h>

int somaImparesRecursivo(int v[], int t)
{
    if (t == 0)
        return 0;
    else
    {
        if (v[t - 1] % 2 != 0)
        {
            return v[t - 1] + somaImparesRecursivo(v, t - 1);
        }
        return somaImparesRecursivo(v, t - 1);
    }
}

int main()
{
    int vetor[6] = {26, 2, 16, 1, 8, 12};
    int tamanho = 6;
    int soma = somaImparesRecursivo(vetor, tamanho);

    printf("%d", soma);

    return 0;
}
