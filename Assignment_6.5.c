/*4. Write a program which accept number from user
return difference between summation of even digits and 
summation of odd digits.
Input  : 2395

OUTPUT : -15 (2  17)

Input  : 1018

OUTPUT : 6  (8  2)

Input  :8440

OUTPUT : 0  (16  0)

Input  : 5733
OUTPUT : -18  (0  18)
*/

#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit = 0, iSumEven = 0, iSumOdd = 0;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit % 2 == 0)
		{
			iSumEven = iSumEven + iDigit;
		}
		else
		{
			iSumOdd = iSumOdd + iDigit;
		}
		iNo = iNo / 10;
	}
	return iSumEven - iSumOdd;
}


int main()
   {
	int iValue  = 0, iRet = 0;
	
	printf("Enter number :");
	scanf("%d", &iValue);
	
	iRet = CountDiff(iValue);
	
	printf("%d", iRet);
	
	return 0;
   }