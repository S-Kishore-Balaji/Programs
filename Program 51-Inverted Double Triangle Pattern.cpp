#include <stdio.h>
int main()
{
	int n=10;
	for(int i=0;i<n;i++)
	{
		if(i<5)
		{
		for(int k=0;k<n/2-i;k++)
		printf("* ");
     	}
     	if(i>=5)
     	{
     		for(int t=5;t<i+1;t++)
     		printf("* ");
		 }
	printf("\n");
	}
	return 0;
}
	
