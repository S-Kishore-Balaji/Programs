#include <stdio.h>
main()
{
	int n=5;
	for(int i=0;i<n;i++)
	{
		for (int s=0;s<i+1;s++)
		printf("  ");
		for(int j=0;j<n-i;j++)
		printf("* ");
	printf("\n");
	}
}
