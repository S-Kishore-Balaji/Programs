#include <stdio.h>
main()
{
	int k=69;
	for (int i=0;i<5;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf("%c ",k);
			k++;
		}
	k-=i+2;
	printf("\n");
	}
}
