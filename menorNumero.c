#include <stdio.h>

int questao3(int lista[], int n)
{
    int menorNumero = 9999;
    int ordenado = 1;

    if (n == 0 || n == 1)
    {
        return 0;
    }

    for (int i = 1; i < n; i++)
    {

        //Verificar o menor numero
        if (menorNumero > lista[i - 1])
            menorNumero = lista[i - 1];

        if (lista[i - 1] > lista[i])
        {
            ordenado = 0;
        }
    }

    if (ordenado == 0)
    {
        return menorNumero;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int lista[] = {30, 20, 3, 50, 5, 10, 1, 1, 20, 1, 3, 2, 1, 100, 90, 3, 10};
    int lista2[] = {1, 2, 3, 4, 5};

    int tamanhoLista = sizeof(lista) / sizeof(int);

    printf("%d", questao3(lista, tamanhoLista));
    return 0;
}
