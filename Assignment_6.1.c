/*1. Write a program which accept number from user
return the count of even digits.
Input  : 2395

OUTPUT : 1

Input  : 1018

OUTPUT : 2

Input  :-1018

OUTPUT : 2

Input  : 8462
OUTPUT : 4
*/
 
 #include<stdio.h>
 
 int CountEven(int iNo)
 {
	 if(iNo < 0)
	 {
		 iNo = - iNo;
	 }
	 
	 int iDigit = 0, iCnt = 0;
	 
	 while(iNo >0)
	 {
		 iDigit = iNo % 10;
		 
		 if(iDigit % 2 == 0 || iDigit ==0)
		 {
			 iCnt++;
		 }
		 iNo = iNo / 10;
	 }
	 return iCnt;
 }
 
  int main()
   {
	int iValue  = 0, iRet = 0;
	
	printf("Enter number :");
	scanf("%d", &iValue);
	
	iRet = CountEven(iValue);
	
	printf("%d", iRet);
	
	return 0;

  }
  
  