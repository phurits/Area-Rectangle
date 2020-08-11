#include<stdio.h>

int main()
{
	double l, w;
	printf("Length = ");
	scanf_s("%lf",&l);
	printf("Width = ");
	scanf_s("%lf", &w);

	printf("Area = %.6lf", l * w);
	return 0;
}