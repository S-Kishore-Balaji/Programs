#include <stdio.h>
main()
{
	int n=4,k=1;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n-i;j++)
		{
			printf("%d  ",k);
			k++;
		}
	printf("\n");
	}
}
