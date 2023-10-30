//To find the Area of Circle
#include <stdio.h>
int main()
{
	float PI=3.1416,r, A ;
	printf("Enter the radius of the Circle: ");
	scanf("%f",&r);
	A =PI*r*r;
	printf("\n");
	printf("The Area of the circle is %.2f sq.units",A );
	return 0;
}
