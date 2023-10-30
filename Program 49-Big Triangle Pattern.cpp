#include <stdio.h>
main()
{
	int n=10;
	for(int i=0;i<n;i++)
	{
		if(i<5)
		{
		for(int j=0;j<i+1;j++)
		printf("* ");
     	}
     	if(i>=5)
     	{
     		for(int s=0;s<n-i;s++)
     		printf("* ");
		 }
	printf("\n");
	}
	
}
