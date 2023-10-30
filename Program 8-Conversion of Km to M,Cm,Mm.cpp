//To convert kilometers to meters centimeters and millimeters
#include <stdio.h>
int main()
{
	int a;long int b,c;
	printf("Enter the value(in kms): ");
	scanf("%d",&a);
	printf("The Value in Meters is %d m",a*1000);
	b=a*1000*100;c=a*1000*100*10;
	printf("\nThe Value in Centieters is %d cm",b);
	printf("\nThe Value in Millimeters is %d mm",c);
	return 0;
}
