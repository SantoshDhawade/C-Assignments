/*3. Write a program which accept number from user 
and count frequency of 4 in it.

Input  : 2395

OUTPUT : 1

Input  : 1018

OUTPUT : 0

Input  : 9440

OUTPUT : 2

Input  : 922432
OUTPUT : 3
  */
  
  #include<stdio.h>
  
  int CountFour(int iNo)
  {
	  int iCnt =0 , iDigit =0;
	  
	  while(iNo > 0)
	  {
		  iDigit = iNo %10;
		  if(iDigit == 4)
		  {
			  iCnt ++;
		  }
		  
		iNo = iNo/10; 
		  
	  }
	   return iCnt;
	 
  }
  
  int main()
   {
	int iValue  = 0, iRet = 0;
	
	printf("Enter number :");
	scanf("%d", &iValue);
	
	iRet = CountFour(iValue);
	
	printf("%d", iRet);
	
	return 0;

  }