#include<stdio.h>
void main(){
	int y,sum=0;
	float avg;
printf("Enter 10 numbers\n");
for(int i=0;i<10;i++){
printf("number%d:",i);
scanf(" %d", &y);
sum+=y;
}
avg=sum/10;
printf("the sum of 10 no is : %d\n",sum);
printf("the avg of 10 no is : %f",avg);

}