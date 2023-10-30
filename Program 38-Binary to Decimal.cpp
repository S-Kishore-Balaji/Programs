#include <stdio.h>
#include <math.h>
main()
{
	int i,n,k,j=0,x=0;
	printf("Enter binary number: ");
	scanf("%d",&i);
	while(i!=0)
	{
		n=i%10;
		k+=n*pow(2,j);
		j++;
		i/=10;
		if(n!=0 && n!=1)
		{
			x=1;
			break;
		}
	}
	if(x==1)
	printf("It is not a binary number.");
	else
	printf("The Decimal Form is %d",k);
}
