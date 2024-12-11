/*5. Accept a character from user and check whether 
that character is vowel()a,e,i,o,u) or not.

Input : E   Output :TRUE 

Input : d   Output :FALSE
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkVowel(char cVal)
{
	if(cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u' || cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char cValue ='\0';
	BOOL bRet = FALSE;

	printf("Enter character :");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Vowel");
	}
	
	else
	{
		printf("It is not Vowel");
	}
	
	return 0;
}