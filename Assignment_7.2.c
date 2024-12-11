/*2. Write a program which accept width and height of rectngle 
from user and calculate its area. (Area = width * height)  

Input  : 5.3   9.78
Output : 51.834

*/

#include<stdio.h>

double RectArea(float fWidth , float fHeight)
{
	double Area = 0.0;
	
	Area = fWidth * fHeight;
	
	return Area;
	
}

int main()
{
	float fValue1 = 0.0 , fValue2 = 0.0;
	double dRet = 0.0;
	
	printf("Enter Width :\n");
	scanf("%f", &fValue1);
	
	printf("Enter Height :\n");
	scanf("%f", &fValue2);
	
	dRet = RectArea(fValue1, fValue2);
	
	printf("The Area of Rectangle is :%f", dRet);
	
	return 0;
}