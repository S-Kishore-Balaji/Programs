#include <stdio.h>
main()
{
	int n,fact=1;
	printf("Enter the number of factorial: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("The sum of %d natural numbers is %d",n,fact);
}
