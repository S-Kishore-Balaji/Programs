#include <stdio.h>
main()
{
	int i,o=0,n,a;
	printf("Enter the number: ");
	scanf("%d",&i);
	a=i;
	while(i!=0)
	{
	    n=i%10;
		o=o*10+n;
		i/=10;
	}
	if(a==o)
	printf("It is a palindrome");
	else
	printf("It is not a palindrome");

}
