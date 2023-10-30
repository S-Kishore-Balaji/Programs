/*to add two numbers*/
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter two values: ");
	scanf("%d %d",&a,&b);
	printf("Their sum is %d",a+b);
	printf("\nTheir difference is %d",a-b);
	printf("\nTheir product is %d",a*b);
	printf("\nTheir division is %.2f",(float)a/(float)b);
	printf("\nTheir modulo division is %d",a%b);
	return 0;
}
