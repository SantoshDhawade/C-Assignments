/*5. Accept number from user and check whether number 
is even or odd*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo)
{
	if(iNo % 2 == 0)
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
	int iValue =0;
	BOOL bRet = FALSE;
	
	printf("Enter number :");
	scanf("%d", &iValue);
	
	bRet = ChkEven(iValue);
	
	if(bRet == TRUE)
	{
		printf("The number is even");
	}
	else 
	{
		printf("The number is Odd");
	}
	
	return 0;
}