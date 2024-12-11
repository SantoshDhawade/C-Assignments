/*3.  Write  a program which accept distance in kilometer and 
convert it into meter (1 km = 1000 meter) 

Input  : 5
Output : 5000

Input  : 12
Output : 12000

*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
	int Result = 0;
	
	Result = iNo *1000;
return Result;	
}

int main()
{
	int iValue = 0 , iRet = 0;
	
	printf("Enter distance :");
	scanf("%d",&iValue);
	
	iRet = KMtoMeter(iValue);
	
	printf("%d",iRet);
	
	return 0;
}