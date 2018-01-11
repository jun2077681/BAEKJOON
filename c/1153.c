#include <stdio.h>

int goldbach(int n, int a, int b, int c, int d);

int main(void)
{
	int N;
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%d", &N);
	if (goldbach(N, a, b, c, d) == 0)
		printf("%d %d %d %d", a, b, c, d);
	else
		printf("%d", goldbach(N, a, b, c, d));

	return 0;
}

int goldbach(int n, int a, int b, int c, int d)
{
	int P[50000];
	int numP = 0;
	int i, j;

	for (i = 2; i <= 1000000; i++) {
		for (j = 2; j <= i - 1; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			P[numP] = i;
			numP++;
		}
	}

	if (n % 2 == 0)
	{
		n -= 4;
		a = 2;
		b = 2;
		for (int i = 0; i <= numP; i++)
		{
			for (int j = i; j <= numP; j++)
			{
				if (n - P[i] == P[j])
				{
					c = P[i];
					d = P[j];
					return 0;
				}
			}
		}
	}
	else
	{
		n -= 5;
		a = 2;
		b = 3;
		for (int i = 0; i <= numP; i++)
		{
			for (int j = i; j <= numP; j++)
			{
				if (n - P[i] == P[j])
				{
					c = P[i];
					d = P[j];
					return 0;
				}
			}
		}
	}
	return -1;
}