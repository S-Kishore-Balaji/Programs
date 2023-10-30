#include <stdio.h>
#include <ctype.h>
int main()
{
	char a;
	printf("Enter the character: ");
	scanf("%c",&a);
	if (isalpha(a))
	{
		if (isupper(a))
		{
		printf("It is an uppercase alphabet");
		if (a==65 || a==69 || a==73 || a==79 || a==85)
		printf(" and it is a vowel");
		else
		printf(" and it is a consonant");
		}
		else if (islower(a))
		{
		printf("It is a lowercase alphabet");
		if (a==97 || a==101 || a==105 || a==111 || a==117)
		printf(" and it is a vowel");
		else
		printf(" and it is a consonant");
		}
	}
	else if (isdigit(a))
	printf("It is a digit");
	else 
	printf("It is a special character");
}
