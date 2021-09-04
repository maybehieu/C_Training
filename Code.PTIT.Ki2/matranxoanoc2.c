#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int in[1000][100], out[1000][100];
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        memset(&in, 0, sizeof(in));
        memset(&out, 0, sizeof(out));
        int m, n;
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &in[i][j]);
            }
        }
        int dem = 0, a = 0, b = 0, col = m - 1, row = n - 1;
        while (a <= row && b <= col && dem < m * n)
        {
            for (int i = b; i <= col; i++)
            {
                printf("%d ", in[a][i]);
                dem++;
                if (dem == m * n)
                {
                    break;
                }
            }
            if (dem == m * n)
            {
                break;
            }
            a++;
            for (int i = a; i <= row; i++)
            {
                printf("%d ", in[i][col]);
                dem++;
                if (dem == m * n)
                {
                    break;
                }
            }
            if (dem == m * n)
            {
                break;
            }
            col--;
            for (int i = col; i >= b; i--)
            {
                printf("%d ", in[row][i]);
                dem++;
                if (dem == m * n)
                {
                    break;
                }
            }
            if (dem == m * n)
            {
                break;
            }
            row--;
            for (int i = row; i >= a; i--)
            {
                printf("%d ", in[i][b]);
                dem++;
                if (dem == m * n)
                {
                    break;
                }
            }
            if (dem == m * n)
            {
                break;
            }
            b++;
        }
        printf("\n");
    }

    return 0;
}