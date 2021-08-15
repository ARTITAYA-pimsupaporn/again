#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double positive(double num1, double num2) {
	return num1 + num2;
}
double negative(double num1, double num2) {
	return num1 - num2;
}
double multiple(double num1, double num2) {
	return num1 * num2;
}
double quotient(double num1, double num2) {
	return num1 / num2;
}

int main() {

	double num1, num2;
	scanf("%lf  %lf", &num1, &num2);
	printf("positive = %.2lf\n", positive(num1, num2));
	printf("negative = %.2lf\n", negative(num1, num2));
	printf("multiple = %.2lf\n", multiple(num1, num2));
	printf("quotient = %.2lf\n", quotient(num1, num2));
	return 0;
}
