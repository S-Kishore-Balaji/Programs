#include <stdio.h>
int main()
{
	int a,b;
	printf("entr two numbrs: ");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Th first nnumbr is %d %d",b,a);
	return 0;
}
