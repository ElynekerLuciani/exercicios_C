#include <stdio.h>

int fatorialRecursivo(int n)
{
    if (n <= 1)
        return 1;
    else
    {
        return n * fatorialRecursivo(n - 1);
    }
}

int main()
{
    int fat = fatorialRecursivo(3);
    printf("%d", fat);
    return 0;
}
