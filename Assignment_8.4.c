/*4. Write a program which accept range from user and 
return addition of all even numbers in between that range.
(Range should contains positive numbers only)

Input  : 23  30
Output : 108 

Input  : 10  18
Output : 70

Input  : 10  10
Output : 10

Input  : -10  2
Output : Invalid Range

Input  : 90  18
Output : Invalid Range
  */
  
  #include<stdio.h>
  
  int RangeSumEven(int iNo1 , int iNo2)
  {
	  if(iNo1 > iNo2  || iNo1 <0 || iNo2 < 0)
	  {
		  printf("Invalid Range");
		  return -1;
	  }
	  
	  int iCnt = 0, iSum = 0;
	  
	  for(iCnt = iNo1 ; iCnt <=  iNo2 ; iCnt++)
	  {
		  if(iCnt % 2 == 0)
 
		  iSum = iSum + iCnt;
		  
      }
	  return iSum;
  }
  
  int main()
  {
	  int iValue1 = 0, iValue2 = 0, iRet = 0;
	  
	  printf("Enter starting point :");
	  scanf("%d", &iValue1);
	  
	  printf("Enter ending point :");
	  scanf("%d", &iValue2);
	  
	  iRet = RangeSumEven(iValue1, iValue2);
	  if(iRet != -1)
	  {
	  printf("Addition is  :%d", iRet);
	  }
	  return 0;
  }