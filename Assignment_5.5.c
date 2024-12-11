/*5.Write a program which accept number from user 
and count frequency of such digits which are less than 6
Input  : 2395

OUTPUT : 3

Input  : 1018

OUTPUT : 3

Input  : 9440

OUTPUT : 3

Input  : 96672
OUTPUT : 1

 */
 #include<stdio.h>
 
 int Count(int iNo)
 {
	 int iDigit = 0 , iCnt = 0;
	 
	 while(iNo > 0)
	 {
		 iDigit = iNo %10;
		 
		 if(iDigit >= 0 && iDigit < 6)
		 {
			 iCnt++;
		 }
		 iNo = iNo /10;
	 }
	 return iCnt;
	 
 }
 
 int main()
   {
	int iValue  = 0, iRet = 0;
	
	printf("Enter number :");
	scanf("%d", &iValue);
	
	iRet = Count(iValue);
	
	printf("%d", iRet);
	
	return 0;

  }