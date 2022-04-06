#include<stdio.h>
void main(){
	int number;
	printf("please Enter number:\n");
	scanf( "%d", &number);
	if(number%2==0){
		printf("number is Even");
		
	}
	else if(number%2!=0)
	{
		printf("number is odd");
	}
}