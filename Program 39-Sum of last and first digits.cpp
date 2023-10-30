#include <stdio.h>
main()
{
	int last,first,i;
	printf("Enter the number: ");
	scanf("%d",&i);
	last=i%10;
	while(i!=0)
	{
		first=i%10;
		i/=10;
	}
	printf("Sum of First and Last digit is: %d",first+last);
}
