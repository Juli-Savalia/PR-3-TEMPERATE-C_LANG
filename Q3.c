//pr3 temperate:-

#include<stdio.h>

void main()
{
	
	int i,sum,lastno,firstno,number;
	
	printf("enter the number :-");
	scanf("%d",&number);
	
	lastno=number%10;
	
	do{
		number=number/10;
		
	}while(number>=10);
	
	firstno=number;
	
	sum = lastno + firstno;
	
	printf("the sum of first and last number is :- %d",sum);
	
}
