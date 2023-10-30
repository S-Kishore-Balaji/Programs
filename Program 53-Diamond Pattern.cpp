#include <stdio.h>
main()
{
	int n=9;
	for(int i=0;i<n;i++)
	{
		if(i<5)
		{
		for(int u=0;u<(n+1)/2-i-1;u++)
	    	printf("  ");
		for(int j=0;j<2*i+1;j++)
		    printf("* ");
	   	}
     	if(i>=5)
     	{
     		for(int p=5;p<i+1;p++)
     		printf("  ");
     		for(int s=0;s<2*n-2*i-1;s++)
     		printf("* ");
		}
	printf("\n");
	}
	
}
