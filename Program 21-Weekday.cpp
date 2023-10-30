//to find weekday
#include <stdio.h>
int main()
{
	int a;
	printf("Enter weekday: ");
	scanf("%d",&a);
	switch(a)
	{	
	case 1:printf("It is Monday.");break;
	case 2:	printf("It is Tuesday");break;
	case 3:	printf("It is Wednesday");break;
	case 4:	printf("It is Thursday");break;
	case 5:	printf("It is Friday");break;
	case 6:	printf("It is Saturday");break;
	case 7:	printf("It is Sunday");break;
	default:printf("Invalid day number");
	}	
	return 0;
}

