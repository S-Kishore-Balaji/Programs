#include <stdio.h>
main()
{
	int n=11;
	for (int i=3;i<n;i++)
	{
		if (i<7)
		{
			for (int j=3;j<i+1;j++)
				{
					printf("%d ",i);
	        	}
        	printf("\n");
		}
        else if(i>6)
        {
        	for (int j=3;j<n-i+3;j++)
        	{
        		printf("%d ",n-i+2);
			}
		printf("\n");
		}
        
	}
}
