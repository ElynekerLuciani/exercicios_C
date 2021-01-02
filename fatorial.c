#include <stdio.h>

int main()
{
    int fat = 1;
    int n = 5;

    while (n > 0)
    {
        fat = fat * n;
        n--;
    }
    printf("fatorial é %d", fat);

    return 0;
}
