//to calculate gross salary
#include <stdio.h>
int main()
{
	float a;
	printf("Enter Basic Salary: ");
	scanf("%f",&a);
	float b,c,d,e;
	c=(44.0*a)/100.0;
	d=(8.0*a)/100.0;
	printf("Enter Tier of your city: ");
	scanf("%f",&e);
	switch(e)
	{
		case 1:b=(24*a)/100;break;
		case 2:b=(16*a)/100;break;
		case 3:b=(12*a)/100;break;
	}
	printf("Your Gross Salary is %.2f",(a+b+c+d));
	return 0;
}
