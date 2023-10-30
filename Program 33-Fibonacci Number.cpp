#include <stdio.h>
main()
{
	int n;
	printf("Enter the nth fibonacci number to be printed: ");
	scanf("%d",&n);
	int a=0,b=1,x[n];
	x[0]=a;x[1]=b;
	for(int i=0;i<n;i++)
	{
		x[i+2]=x[i]+x[i+1];
	}
	printf("The %dth number is %d",n,x[n-1]);
}
