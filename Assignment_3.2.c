/*2. write a program hich accept number from user and
print even factors of that number.

Input  : 24
Output : 2 4 6 8 12 */

#include<stdio.h>

void DisplayEvnFactor(int iNo)
{
	int iCnt =0;
	if(iNo <= 0)
	{
		iNo = - iNo;
	}
	
	for (iCnt =1 ; iCnt<= iNo/2; iCnt ++)
	{
		if(iNo % iCnt == 0 && iCnt %2 ==0)
		{
			printf("%d \t", iCnt);
		}
	}
}

int main()
{
	int iValue =0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	DisplayEvnFactor(iValue);
	
	return 0;
}