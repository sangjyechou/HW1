#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n[3],a,b,t;
	printf("input three number:");
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	for (a = 2; a > 0; a--)
	{
		for (b = 0; b <= a - 1; b++)
		{
			if (n[b] > n[b + 1])
			{
				t = n[b];
				n[b] = n[b + 1];
				n[b + 1] = t;
			}
		}
	}
	printf("the largest number is:%d\n",n[2]);
	printf("the smallest number is:%d\n",n[0]);
	system("pause");
	return 0;
}