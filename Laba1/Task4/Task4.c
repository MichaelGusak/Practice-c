#include "stdio.h"
#include "math.h"
#include "locale.h"

double x, y;
double result;
void f(void);

void main()
{
	
	setlocale(LC_ALL, "rus");
    x = 5, y = 2;
	f();
	printf("x = %.lf\r\ny = %.lf\r\n", x, y);
	printf("f(x,y) = %lf\r\n", result);
	printf("����� �������� x:");
	scanf_s("%lf", &x);
	printf("����� �������� y:");
	scanf_s("%lf", &y);
	f();
	printf("f(x,y) = %lf\r\n", result);

	system("pause");
	return 0;
}

void f(void)
{
	result = sin(y + x) * sin(y - x);
}