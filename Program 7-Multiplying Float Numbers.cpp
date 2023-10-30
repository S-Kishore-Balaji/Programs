//Multiplying floating point numbers
#include <stdio.h>
int main()
{
	float a,b,c;
	int d;
	printf("Enter Two values: ");
	scanf("%f %f",&a,&b);
	c=a*b;
	printf("Their product in float is %.2f",c);
	printf("\n");
	d=(int)(c+0.5);
	printf("Their product in int is %d",d);
	return 0;
}
