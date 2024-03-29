#include <stdio.h>
#include <f.h>
#include <math.h>

double summ(n)
{
	double a = 0;
	for (int i = 0; i <= n - 1; ++i)
	{
		a += pow(-1, i)*((1+3*i) / (pow(3, i)));
	}
	return a;
}


double summ2(double eps)
{
	double a = pow(-1, 0)*((1 + 3 * 0) / (pow(3, 0)));
	double s = a;
	for (int i = 1; fabs(a) > eps; ++i)
	{	
		a = pow(-1, i)*((1 + 3 * i) / (pow(3, i)));
		s = s + a;
	}
	return s;
}

void print(int n, int k)
{
	int q = 1;
	for (int i = 0; i <= n-1; ++i)
	{
		if (q == k)
		{
			q = 1;
			continue;
		}
		else
		{
			double a = pow(-1, i)*((1 + 3 * i) / (pow(3, i)));
			printf("%.3lf ", a);
		}
		++q;		
	}
}


int findFirstElement(double eps)
{	
	int i = 0;
	for (i; ; ++i)
	{
		double a = pow(-1, i)*((1 + 3 * i) / (pow(3, i)));
		if(fabs(a) <= eps)
		{
			break;
		}
	}
	return i;
}


int findFirstNegativeElement(double eps)
{
	for (int i = 0;; ++i)
	{
		double a = pow(-1, i)*((1 + 3 * i) / (pow(3, i)));
		if (fabs(a) <= eps && a < 0)
		{
			return i;
		}
	}
}