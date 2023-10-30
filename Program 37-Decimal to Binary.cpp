#include <stdio.h>
#include <math.h>

main()
{
	int i,k=0,n=0,j=0;
	printf("Enter decimal Number: ");
	scanf("%d",&i);
	while(i!=0)
	{
		n=i%2;
		k+=n*pow(10,j);
		i/=2;
		j++;
	}
	printf("Binary form is: %d",k);
}
