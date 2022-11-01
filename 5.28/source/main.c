#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;

	printf("Enter any character :");
	scanf("%c", &ch);

	if (isalpha(ch))
	{
		
		if (isupper(ch))
		{  
			printf("Given Character : %c \n", ch);
			printf("After Case changing : %c \n", ch + 32);
		}
		else
		{ 
			printf("Given Character : %c \n", ch);
			printf("After Case changing : %c \n", ch - 32);
		}
	}
	else
	{
		printf("Invalid Input: Please provide an Alphabet \n");
	}
	return 0;
}