#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, ssh = 0, dau, cuoi, soMoi;
    scanf("%d", &n);
    int m = n;
    cuoi = n % 10;
    while (n > 0)
    {
        dau = n % 10;
        n /= 10;
        ssh++;
    }
    ssh--;
    int cong = cuoi, tru = dau;
    while (ssh > 0)
    {
        cong = cong * 10;
        tru = tru * 10;
        ssh--;
    }
    soMoi = m - cuoi + cong - tru + dau;
    printf("%d", soMoi);
    return 0;
}