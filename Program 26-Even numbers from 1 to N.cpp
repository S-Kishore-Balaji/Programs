#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number upto which you want the odd numbers: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	if(i%2=0)
	printf("%d ",i);
    }
}
