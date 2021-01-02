#include <stdio.h>

int verificarOrdenado(int x[], int n)
{
    int iMenor = 0;

    for (int i = 1; i < n; i++)
    {
        if (x[iMenor] < x[i])
        {
            continue;
        }
        else
        {
            iMenor = i;
        }
    }
    return iMenor;
}

int main()
{
    int vetor[11] = {5, 2, 1, 3, 8, 7, 10, 0, 8, 2, -1};
    int vetorOrdenado[11] = {1, 2, 3, 5, 6, 7, 9, 10, 11, 15};
    int tamanho = 11;
    int resposta = verificarOrdenado(vetor, tamanho);

    printf("%d\n", resposta);

    return 0;
}
