#include <stdio.h>
#include <string.h>
void lwr(char a[])
{
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
	}
}
int main()
{
	char s[10000], a[100][100];
	int b[100] = {0};
	int n = 0, k = 0;
	gets(s);
	char *x = strtok(s, " ");
	while (x != NULL)
	{
		strcpy(a[n], x);
		x = strtok(NULL, " ");
		n++;
	}
	for (int i = 0; i < n; i++)
	{
		lwr(a[i]);
		//		strcpy (a[i], strlwr(a[i]));
		b[i] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (b[i] != 0)
				if (strcmp(a[i], a[j]) == 0)
				{
					b[j] = 0;
					b[i]++;
				}
		}
		//		printf("%d\n", b[i]);
		if (b[i] != 0)
		{
			printf("%s %d\n", a[i], b[i]);
			b[i] = 0;
		}
	}

	return 0;
}
