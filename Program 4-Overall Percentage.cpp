//To calculate the overall Percentage of a student 
#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter Subject 1 marks: ");
	scanf("%d",&a);
	printf("Enter Subject 2 marks: ");
	scanf("%d",&b);
	printf("Enter Subject 3 marks: ");
	scanf("%d",&c);
	printf("Enter Subject 4 marks: ");
	scanf("%d",&d);
	printf("Enter Subject 5 marks: ");
	scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	printf("The overall percentage of the student is %d %%",f);
	return 0;
}
