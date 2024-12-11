/*1.Write a program which accept nnnumber from user 
and display its digits in reverse order.
Input  : 2395

OUTPUT : 5 9 3 2 

Input  : 1018

OUTPUT : 8 1 0 1

Input  : -1018

OUTPUT : 8 1 0 1

Input  : 9000

OUTPUT : 0 0 0 9
*/

#include<stdio.h>

void DispalyDigit(int iNo)
{
	int iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo >0)
	{
		iDigit = iNo % 10;
		printf("%d\t", iDigit);
		
		iNo = iNo /10;
	}
}

int main()
{
	int iValue  = 0;
	
	printf("Enter number :");
	scanf("%d", &iValue);
	
	DispalyDigit(iValue);
	
	return 0;
}