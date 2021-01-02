#include <stdio.h>

int somaMultiplos(int x[], int n)
{
    int soma = 0;               //atribuição 2
    for (int i = 0; i < n; i++) //somatório e atribuição 2
    {
        if (x[i] % 3 == 0) //indexação e cálculo 2
        {
            soma = soma + x[i]; //indexação, soma e atribuição 3
        }
    }
    return soma;
}

/*
 para a complexidade de melhor caso: F(x,n) = (4n +1), portanto Ω(n)
 para a complexidade de pior caso: F(x,n) = (7n+1), portanto O(n)
*/

int main()
{
    int vetor[5] = {3, 6, 6, 9, 13};
    int resultado = somaMultiplos(vetor, 5);
    printf("%d", resultado);

    return 0;
}
