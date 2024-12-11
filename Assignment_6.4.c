/*4. Write a program which accept number from user
return the count of digits in between 3 and 7.
Input  : 2395

OUTPUT : 270

Input  : 1018

OUTPUT : 8

Input  :9440

OUTPUT : 144

Input  : 922432
OUTPUT : 864
*/

#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit = 0 , iMul = 1;
	
	while(iNo > 0)
	{
		iDigit = iNo %10;
		
		if(iDigit > 0)
		{
		iMul = iMul *iDigit;
		}
		
		iNo = iNo /10;
	}
	return iMul;
	
}

int main()
   {
	int iValue  = 0, iRet = 0;
	
	printf("Enter number :");
	scanf("%d", &iValue);
	
	iRet = MultDigits(iValue);
	
	printf("%d", iRet);
	
	return 0;

  }