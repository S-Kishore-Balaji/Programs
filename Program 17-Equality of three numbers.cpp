//to check whether 3 numbers are equal or not
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c && c==a)
	printf("Three numbers are equal");
	else
	printf("Three numbers are not equal");
	return 0;
}
