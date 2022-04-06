#include<stdio.h>
void main(){
	int number;
	printf("Enter the number to diplay its multiplication table:");
	scanf(" %d",&number);
	for(int i=1;i<=6;i++)
	{
		
		printf(" %d*%d =%d \n",number,i,number*i);
	}
}