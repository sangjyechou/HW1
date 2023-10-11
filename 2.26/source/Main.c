#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1, n2;
	printf("input two number:");
	scanf("%d %d", &n1, &n2);
	if (n1%n2 == 0)
		printf("%d is a multiple of %d", n1, n2);
	if (n1%n2 != 0)
		printf("%d is not a multiple of %d", n1, n2);
	system("pause");
	return 0;
}