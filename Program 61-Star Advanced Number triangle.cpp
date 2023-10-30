#include <stdio.h>
main()
{
	int n=8;
	for (int i=0;i<n;i++)
	{
		if (i<4)
		{
			for (int j=0;j<i;j++)
				{
					printf("%d*",i+1);
	        	}
	        printf("%d\n",i+1);
		}
        else if(i>3)
        {
        	for (int j=0;j<n-i-1;j++)
        	{
        		printf("%d*",n-i);
			}
		printf("%d\n",n-i);
		}
        
	}
}
