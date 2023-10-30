#include <stdio.h>
int main()
{
	int n=10;
	for(int i=0;i<n;i++)
	{
		if(i<5)
		{
		for(int u=0;u<i+1;u++)
	    	printf("* ");
		for(int j=0;j<n-2*i-2;j++)
		    printf("  ");
		for(int k=0;k<i+1;k++)
	    	printf("* ");
     	}
     	if(i>=5)
     	{


 
     		for(int p=0;p<n-i;p++)
     		printf("* ");
     		for(int s=0;s<2*i-n;s++)
     		printf("  ");
     		for(int t=0;t<n-i;t++)
     		printf("* ");
		}
	printf("\n");
	}
	return 0;
}
	
