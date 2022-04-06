#include<stdio.h>
void main(){ 
int number1,number2,number3;
	printf("Enter number1:\n");
	scanf(" %d", &number1);
	printf("Enter number2:\n");
	scanf(" %d", &number2);
	printf("Enter number3:\n");
	scanf(" %d", &number3);
	if((number1>number2)&&(number1>number3))
	{
		printf("Maximum number is %d\n",number1);
	}
	else if((number2>number1)&&(number2>number3))
	{
		printf("Maximum number is %d\n",number2);
	}
	else
	{
		printf("Maximum number is %d",number3);
	}
}