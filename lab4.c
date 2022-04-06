#include<stdio.h>
void main(){
int number;
printf("please Enter your number:");
scanf(" %d", &number);
if(number>=0&&number<50){
printf("Your raiting is failed");
}
else if(number>=50&&number<65){
printf("Your raiting is normal");
}
else if(number>=65&&number<75){
printf("Your raiting is Good");
}
else if(number>=75&&number<85){
printf("Your raiting is Very Good");
}
else if(number>=85){
printf("Your raiting is Very Excellent");
}
}