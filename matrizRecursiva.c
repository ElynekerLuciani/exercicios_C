#include <stdio.h>
#include <stdlib.h>

int N = 5;

int maxInRow(int mtx[][N], int row, int cols)
{
    if (cols == 0)
        return mtx[row][cols];

    int possibleMax = mtx[row][cols - 1];

    int sublistMax = maxInRow(mtx, row, cols - 1);

    int max = (sublistMax > possibleMax) ? sublistMax : possibleMax;

    return max;
}

int main()
{
    int z[2][2] = {
        {34, 445},
        {880, 590}};

    int y[5][5] = {
        {34, 45, 18, 56, 98},
        {88, 59, 23, 34, 44},
        {33, 32, 31, 22, 33},
        {40, 50, 21, 17, 15},
        {4, 14, 32, 11, 22}};

    int mat[12][12] = {
        {34, 45, 18, 56, 98, 33, 42, 67, 6, 11, 40, 10},
        {88, 59, 23, 34, 44, 11, 34, 61, 43, 1, 3, 9},
        {33, 32, 31, 22, 33, 77, 12, 11, 34, 98, 72, 74},
        {40, 50, 21, 17, 15, 52, 45, 10, 9, 32, 27, 30},
        {4, 14, 32, 11, 22, 33, 44, 65, 8, 52, 76, 12},
        {6, 13, 56, 91, 22, 45, 22, 18, 7, 45, 23, 44},
        {8, 9, 20, 87, 2, 5, 56, 5, 6, 5, 4, 3},
        {12, 99, 23, 4, 3, 81, 42, 4, 8, 4, 77, 2},
        {98, 97, 96, 95, 38, 1, 2, 3, 56, 3, 56, 1},
        {3, 1, 7, 45, 93, 96, 1, 46, 100, 2, 41, 23},
        {40, 50, 21, 17, 15, 4, 14, 32, 11, 22, 51, 15},
        {88, 59, 23, 34, 44, 34, 45, 18, 56, 98, 79, 88}};

    // printf("Maior elemento = %d\n", maior(y, 5, 0, 0));
    printf("%d\n", maxInRow(mat, 1, N));
    return 0;
}

//  if (t == 1)
//     {
//         return matriz[0][0];
//     }
//     else
//     {

//         int num = maior(matriz, t - 1, i, j++);
//         printf("%d\n", num);
//         if (num > matriz[i][j + 1])
//         {
//             return num;
//         }
//         return matriz[i][j];
//     }

//     return maior(matriz, t, i++, j);
