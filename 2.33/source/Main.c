#include<stdio.h>
#include<stdio.h>

int main(void)
{
	float miles, gcost, gmiles, parkfee, toll,total;
	printf("input total miles driven per day:");
	scanf("%f", &miles);
	printf("input cost per gallon of gasoline:");
	scanf("%f", &gcost);
	printf("input average miles per gallon:");
	scanf("%f", &gmiles);
	printf("input parking fees per day:");
	scanf("%f", &parkfee);
	printf("input tolls per day:");
	scanf("%f", &toll);
	total = (miles / gmiles)*gcost + parkfee + toll;
	printf("total cost is:%f", total);
	system("pause");
	return 0;
}