#include <math.h>
#include <stdio.h>

int my_pow(double a, int n)
{
	return n == 0 ? 1 : a * my_pow(a, n - 1);
}

int main()
{

	double S = 0;
	double P = 1;
	int n;
	printf("Enter n:");
	scanf("%d", &n);
	double p = 1;
	int counting;
	counting = 0;

	for(int i = 1;i <= n;i++)
	{
		for (int j = 1; j <= i; j++)
		{
			p *= (j + cos(j));
            counting +=3;
		}
		S += (my_pow(4,i) -i) / p;
		p = 1;
		counting +=4+i;
	}
	printf("S = %.7lf", S);
	printf("\nOperations:%d", counting);

	return 0;
}


