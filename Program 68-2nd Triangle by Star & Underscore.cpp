#include <stdio.h>
main()
{
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf("  ");
		}
		printf("* ");
		for(int j=0;j<7-2*i;j++)
		{
			printf("_ ");
		}
	    if(i==4)
	    break;
	    printf("*\n");
	}
}
