#include <stdio.h>
main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5-i;j++)
		{
			printf("%c ",i+65);
		}
	printf("\n");
	}
}
