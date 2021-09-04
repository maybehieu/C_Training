#include<stdio.h>
#include<string.h>

int main () {
	char a[100][100], s[100], check[100] = {0};
	int n = 0;
	gets(s);
	char *b = strtok (s, " ");
	while (b != NULL) {
		strcpy(a[n], b);
		b = strtok(NULL, " ");
		n++;
	}
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (strcmp(a[i], a[j]) == 0){
				check[j] = 1;
			}
		}
		if (check[i] != 1)
		printf("%s ", a[i]);
		
	}
	return 0;
}

