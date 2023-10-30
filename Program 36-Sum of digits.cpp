#include <stdio.h>
main()
{
	int i,j=0,k;
	printf("Enter the number: ");
	scanf("%d",&i);
	while(i!=0)
	{
		k=i%10;
		j+=k;
		i/=10;
	}
	printf("Sum of digits is %d",j);
}
