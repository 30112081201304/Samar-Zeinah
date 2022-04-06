#include<stdio.h>
void main(){
	int Whours;
	float salary;
printf("please Enter your working hours:");
scanf(" %d", &Whours);

salary=Whours*50;

if(Whours<40)
{
salary*=0.1;
printf("Your salary is: %0.3f",salary);
}
else
{
	printf("Your salary is:%0.1f",salary);
}
}