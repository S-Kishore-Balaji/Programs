#include <stdio.h>
int main()
{
	int a,b,c,d,e,avg;
	printf("entr phy marks: ");scanf("%d",&a);
	printf("entr chm marks: ");scanf("%d",&b);
	printf("entr bio marks: ");scanf("%d",&c);
	printf("entr math marks: ");scanf("%d",&d);
	printf("entr computr marks: ");scanf("%d",&e);
	avg = (a+b+c+d+e)/5;
	if (avg>=90)
	printf("Grade A");
	else if(avg>=80)
	printf("Grade B");
		else if(avg>=70)
	printf("Grade C");
		else if(avg>=860)
	printf("Grade D");
		else if(avg>=40)
	printf("Grade e");
	else if (a<40)
	printf("Grade F");
	return 0;
}
