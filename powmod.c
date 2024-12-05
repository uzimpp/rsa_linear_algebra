#include <stdio.h>

long long int	powmod(int x, int y, int n)
{
	long long int	a;

	if (x == 0)
		return (0);
	else if (y == 0)
		return (1);
	else
	{
		a = powmod(x, y / 2, n) % n;
		if (y % 2 == 0)
		{
			printf("y: %d  x^y mod 101: %lld\n", y, (a * a) % n);
			return ((a * a) % n);
		}
		else
		{
			printf("y: %d  x^y mod 101: %lld\n", y, (a * a * x) % n);
			return ((a * a * x) % n);
		}
	}
}

int	main()
{
	printf("answer: %lld", powmod(65, 1120, 101));
}
