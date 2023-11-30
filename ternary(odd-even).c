#include<stdio.h>
main()
{
	int number;
	
	printf(" Enter the number = ");
	scanf("%d",&number);
	
	(number%2==0) ? printf(" %d is even number",number): printf(" %d is odd number",number);

}