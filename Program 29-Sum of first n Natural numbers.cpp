#include <stdio.h>
main()
{
	int n,sum=0;
	printf("Enter the number of numbers: ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		sum+=i;
	}
	printf("The sum of %d natural numbers is %d",n,sum);
}
