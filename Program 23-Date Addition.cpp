//to find next input date
#include <stdio.h>
int main()
{
	int d,m,y;
	printf("Enter date (in dd mm yyyy format): ");
	scanf("%d %d %d",&d,&m,&y);
	if (m>0 && m<13 && m!=2)
	{
		if (d>0 && d<31)
		printf("The date is %d %d %d",++d,m,y);
		else if (d==31 && m==12)
		printf("The date is 1 1 %d",++y);
		else if (d==31)
		printf("The date is 1 %d %d",++m,y);
	}
	else if (m==2)
	{
		if (y%4==0 && (y%100!=0 || y%400==0))
		{
			if (d>0 && d<29)
			printf("The date is %d %d %d",++d,m,y);
			else if (d==29)
			printf("The date is 1 %d %d",++m,y);
		}
		else 
		{
			if (d>0 && d<28)
			printf("The date is %d %d %d",++d,m,y);
			else if (d==28)
			printf("The date is 1 %d %d",++m,y);
		}
	}
	else
		printf("Invalid Date.");
	
	return 0;
}
