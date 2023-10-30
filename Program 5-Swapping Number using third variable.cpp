//To swap two numbers
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	c=a;a=b;b=c;
	printf("Now the First number is %d and the Second Number is %d after swapping.",a,b);
	return 0;
}
