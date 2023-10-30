#include <stdio.h>
main()
{
	int n=10;
	for(int i=0;i<n;i++)
	{
		if(i<5)
		{
		for(int j=0;j<i+1;j++)
		printf("  ");
		for(int k=0;k<n/2-i;k++)
		printf("* ");
     	}
     	if(i>=5)
     	{
     		for(int s=0;s<n-i;s++)
     		printf("  ");
     		for(int t=5;t<i+1;t++)
     		printf("* ");
		 }
	printf("\n");
	}
	
}
