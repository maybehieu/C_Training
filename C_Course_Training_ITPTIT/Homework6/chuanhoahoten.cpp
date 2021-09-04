#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bo;
    scanf("%d\n", &bo);
    while (bo--)
    {
        char ten[1000];
        const char cach[2] = " ";
        char *tu;
        gets(ten);
        tu = strtok(ten, cach);
        while (tu != NULL)
        {
            for (int i = 1; i < strlen(tu); i++)
            {
                if (tu[0] >= 97 && tu[0] <= 122)
                {
                    tu[0] = tu[0] - 32;
                }
                if (tu[i] < 97)
                {
                    tu[i] = tu[i] + 32;
                }
                
            }
            
            printf("%s ", tu);
            tu = strtok(NULL, cach);
        }
        printf("\n");
        
    }
}