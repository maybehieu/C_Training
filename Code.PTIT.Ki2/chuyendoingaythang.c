#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, ngay = 0, tuan = 0, nam = 0;
    scanf("%d", &ngay);
    nam = ngay / 365;
    ngay = ngay - (nam * 365);
    tuan = ngay / 7;
    ngay = ngay - (tuan * 7);
    printf("%d %d %d", nam, tuan, ngay);
    return 0;
}