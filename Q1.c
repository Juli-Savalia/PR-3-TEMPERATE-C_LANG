//Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.:-

#include<stdio.h>

void main()
{
	char i='a';
	
	printf("the alphabets from a to z by skipping 3 alphabets are:-\n");
	
	do{
		i=i+3;
		printf("%c \n",i);
	}while(i<='z');
}
