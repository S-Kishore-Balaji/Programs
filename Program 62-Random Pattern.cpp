#include <stdio.h>
main()
{
	int k=0,l=0;
	for (int i=0;i<5;i++)
	{
		if(i==2*k)
		{
    		for(int j=0;j<7;j++)
        		{
	            	printf("%d",i+1);
	            }
     		printf("%d",i+2);
	    	k++;
	    }
	    else if(i==2*l+1)
	    {
	    	printf("%d",i+2);
	    	for (int j=0;j<7;j++)
	        	printf("%d",i+1);
	    	l++;
		}
    	printf("\n");
	}
}
