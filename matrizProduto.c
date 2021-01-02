#include <stdio.h>

int main(void)
{
    int matrizX[2][2] = {{1, 4}, {3, 2}};
    int matrizY[2][2] = {{1, 2}, {0, 3}};
    int matrizZ[2][2] = {{0, 0}, {0, 0}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                matrizZ[i][j] = matrizZ[i][j] + matrizX[i][k] * matrizY[k][j];
            }
            printf("[%d] \n", matrizZ[i][j]);
        }
    }
    return 0;
}
