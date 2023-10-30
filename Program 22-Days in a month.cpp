//days in a month
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter Year and Month Number: ");
	scanf("%d %d",&a,&b);
	if (b==1 || b==3 || b==5 || b==7 || b==8 || b== 10 || b==12)
	printf("There are 31 days in this month.");
	else if (b==4 || b==6 || b==9 || b==11)
	printf("There are 30 days in this month.");
	else if (b==2)
	{
		if (a%4==0 && (a%100!=0 || a%400==0))
		printf("There are 29 days in this month.");
		else 
		printf("There are 28 days in this month.");
	}
	return 0;
}
