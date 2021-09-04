#include <stdio.h>
#include <math.h>
#include <string.h>
int test;
int UCLN(int a, int b)
{
    if (a % b != 0)
    {
        return UCLN(b, a % b);
    }
    else
    {
        return b;
    }
}
int check(int b, int d)
{
    if (b % d == 0)
    {
        return b / d;
    }
    if (d % b == 0)
    {
        return d / b;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int Test;
    scanf("%d", &Test);
    for (int z = 1; z <= Test; z++)
    {
        int a, b, c, d, uoc;
        test = 0;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        uoc = UCLN(a, b);
        a /= uoc;
        b /= uoc;
        uoc = UCLN(c, d);
        c /= uoc;
        d /= uoc;
        printf("Case #%d:\n", z);
        if (check(b, d) == 0)
        {
            printf("%d/%d %d/%d\n", a * d, b * d, c * b, d * b);
        }
        else
        {
            if (b < d)
            {
                printf("%d/%d %d/%d\n", a * check(b, d), b * check(b, d), c, d);
                test = 1;
            }
            else
            {
                printf("%d/%d %d/%d\n", a, b, c * check(b, d), d * check(b, d));
                test = 2;
            }
        }
        int tu, mau;
        switch (test)
        {
        case 0:
            tu = a * d + b * c;
            mau = b * d;
            uoc = UCLN(tu, mau);
            tu /= uoc;
            mau /= uoc;
            printf("%d/%d\n", tu, mau);
            break;
        case 1:
            tu = a * check(b, d) + c;
            mau = d;
            uoc = UCLN(tu, mau);
            tu /= uoc;
            mau /= uoc;
            printf("%d/%d\n", tu, mau);
            break;
        case 2:
            tu = c * check(b, d) + a;
            mau = b;
            uoc = UCLN(tu, mau);
            tu /= uoc;
            mau /= uoc;
            printf("%d/%d\n", tu, mau);
            break;
        }
        tu = a * d, mau = b * c;
        uoc = UCLN(tu, mau);
        tu /= uoc;
        mau /= uoc;
        printf("%d/%d\n", tu, mau);
    }

    return 0;
}