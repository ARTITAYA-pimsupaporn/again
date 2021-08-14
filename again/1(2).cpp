#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

int main()
{
	int num[2];
	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("%d\n", num[0] + num[1]);
	printf("%d\n", num[0] - num[1]);
	printf("%d\n", num[0] * num[1]);
	printf("%d\n", num[0] / num[1]);

	return 0;
}