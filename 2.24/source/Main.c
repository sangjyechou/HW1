#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	printf("input a number:");
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("%d is even", n);
	if (n % 2 == 1)
		printf("%d is odd", n);
	system("pause");
	return 0;
}