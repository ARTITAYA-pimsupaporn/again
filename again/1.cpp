#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	double num1, num2;
	printf("Input your num1 , num2 : ");
	scanf("%lf %lf", &num1, &num2);
	printf("positive %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
	printf("negative %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
	printf("multiple %.2lf x %.2lf = %.2lf\n", num1, num2, num1 * num2);
	printf("quotient %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);


	return 0;
}