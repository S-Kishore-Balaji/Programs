//to calculate the electricity bill
#include <stdio.h>
int main()
{
	int u;
	printf("Enter Number of units: ");
	scanf("%d",&u);
	if  (u>=0 && u<=100)
	printf("Bill is %d",u*2);
	if  (u>=101 && u<=250)
	printf("Bill is %.2f",u*3.5);
	if  (u>=250)
	printf("Bill is %d",u*5);
	return 0;
}
