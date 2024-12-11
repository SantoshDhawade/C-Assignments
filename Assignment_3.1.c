/*1.write a program which accept one number from
 user and print that number of even numbers on screen.
 
 Input  : 7
 Output : 2 4  6 8 10 12 14
 */
 
 #include<stdio.h>
 
 int PrintEven(int iNo)
 {
	 if(iNo<= 0)
	 {
		 return -1;
	 }
	 int iCnt =0 ;
	 for(iCnt =1; iCnt<=iNo; iCnt++)
	 {
		printf("%d\t",iCnt*2) ;
	 }
 }
 
 int main()
 {
	 int iValue =0;
	 printf("Enter number :\n");
	 scanf("%d",&iValue);
	 
	 PrintEven(iValue);
	 
	 return 0;
 }