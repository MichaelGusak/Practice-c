#include <stdio.h>
#include <locale.h>

extern double x, y;
extern double result;
extern void f(void);

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
