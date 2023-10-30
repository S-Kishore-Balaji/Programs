#include <stdio.h>
main()
{
	int n=9;
	for(int i=0;i<n;i++)
	{
		if(i==0 || i==2 || i==4 )
		{
			for(int j=0;j<i+1;j++)
			{
				printf("*");
			}
		
		}
		else if(i==1 || i==3 )
		{
			for(int j=0;j<i+1;j++)
			{
				printf("_");
			}
		}
		else if(i==5 || i==7 )
		{
			for(int j=0;j<n-i;j++)
			{
				printf("_");
			}
		}
		else if(i==6 || i==8 )
		{
			for(int j=0;j<n-i;j++)
			{
				printf("*");
			}
		}
	    printf("\n");
	}
}
