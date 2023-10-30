#include <stdio.h>
int main()
{
	int a,b,c;printf("Enter a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
		printf("a is greatest");
	else if (b>c)
		printf("b is greatest");
	else 
		printf("c is greatest");
	return 0;
}
