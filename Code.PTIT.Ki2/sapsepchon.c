#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, a[100], dem = 0, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        dem++;
        int vitrimin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[vitrimin])
            {
                vitrimin = j;
            }
        }
        if (vitrimin != i)
        {
            t = a[vitrimin];
            a[vitrimin] = a[i];
            a[i] = t;
        }
        printf("Buoc %d: ", dem);
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    return 0;
}