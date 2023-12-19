//Write a Program to count the total number of digits in a number:-

#include<stdio.h>

void main()
{
	int i,no;
	printf("enter the number:-");
	scanf("%d",&no);
	do{
	
		i=no/10;
		printf("%d",i);
		
	}while(no>=10);
	
}
