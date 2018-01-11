#include <stdio.h>
#include <math.h>

double logXXX(double x, double base)
{
	return log(x) / log(base);
}

int search(int n)
{
	int count = 0;
	int count1 = 0;
	int count2 = 0;
	while (n != 1)
	{
		if (logXXX((double)n, 2) == (int)logXXX((double)n, 2))
		{
			count += logXXX((double)n, 2);
			n = 1;
		}
		else if (n % 3 == 0)
		{
			n /= 3;
			count++;
		}
		else if (n % 4 == 0)
		{
			n /= 2;
			count++;
		}
		else if (n % 3 == 1)
		{
			n -= 1;
			count++;
		}
		else if (n % 2 == 0)
		{
			if (search(n / 2) <= search(n - 1))
			{
				n /= 2;
				count++;
			}
			else
			{
				n -= 1;
				count++;
			}
		}
		else
		{
			n -= 1;
			count++;
		}
	}
	return count;
}
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", search(n));
	return 0;
}