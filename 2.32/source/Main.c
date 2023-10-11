#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float w, h,b;
	printf("input your weight in kilograms and height in meters:");
	scanf("%f %f", &w, &h);
	b = w / (h*h);
	if (b <= 18.5)
		printf("you are Underweight\n");
	if (b > 18.5 && b<25)
		printf("you are Normal\n");
	if (b >=25 && b < 30)
		printf("you are Overweight\n");
	if (b >= 30)
		printf("you are Obese\n");
	system("pause");
	return 0;
}