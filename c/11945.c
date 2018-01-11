#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int n, m;
	char **a;
	char **b;
	scanf("%d %d", &n, &m);

	a = (char**)malloc(sizeof(char*)*n);
	for (int i = 0; i < m + 1; i++)
	{
		a[i] = (char*)malloc(sizeof(char)*(m + 1));
	}

	b = (char**)malloc(sizeof(char*)*n);
	for (int i = 0; i < m + 1; i++)
	{
		b[i] = (char*)malloc(sizeof(char)*(m + 1));
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m + 1; j++)
		{
			scanf("%c", &a[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m + 1; j++)
		{
			b[i][j] = a[i][m - j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m + 1; j++)
		{
			printf("%c", b[i][j]);
		}
	}

	for (int i = 0; i < m + 1; i++)
	{
		free(a[i]);
		free(b[i]);
	}

	free(a);
	free(b);

	return 0;
}