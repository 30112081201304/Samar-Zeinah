#include<stdio.h>
void main(){
int x,i;
printf("Enter answer 3*4=");
scanf(" %d",&x);
while(x!=12)
{
	printf("not correct please try again");
	scanf(" %d",&x);
	i++;
}
printf("thanks");
}