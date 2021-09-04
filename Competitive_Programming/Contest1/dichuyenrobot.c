#include <stdio.h>
char thuchien[__INT_MAX__];
int main()
{
    int n, doc = 0, ngang = 0, huong = 1;
    //bac = 1,nam = 2, dong = 4, tay = 3 
    scanf("%d\n", &n);
    gets(thuchien);
    for (int i = 0; i < n; i++)
    {
        if (huong == 1)
        {
            if (thuchien[i] == 'G')
            {
                doc++;
            }
            else if (thuchien[i] == 'L')
            {
                ngang--;
                huong = 3;
                break;
            }
            else if (thuchien[i] == 'R')
            {
                ngang++;
                huong = 4;
                break;
            }
            else if (thuchien[i] == 'B')
            {
                doc--;
                huong = 2;
                break;
            }
        }
        else if ()
        {
            /* code */
        }
        
        
    }
    
    printf("%d %d", ngang, doc);
    return 0;
}