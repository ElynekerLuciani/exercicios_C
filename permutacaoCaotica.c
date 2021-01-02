#include <stdio.h>

int permutacaoCaotica(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
    {
        return (n - 1) * (permutacaoCaotica(n - 2) + permutacaoCaotica(n - 1));
    }
}

int main()
{
    int i = permutacaoCaotica(4);
    printf("%d", i);
    return 0;
}
