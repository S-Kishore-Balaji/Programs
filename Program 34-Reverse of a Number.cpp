#include <stdio.h>
main()
{
	int i,o=0,n;
	printf("Enter the number: ");
	scanf("%d",&i);
	while(i!=0)
	{
	    n=i%10;
		o=o*10+n;
		i/=10;
	}
	printf("The Reverse number is %d",o);

}
