#include<stdio.h>
int main()
{
int num, i, fact=1;
printf("Enter an integer\n");
scanf("%d",&num);
i=num;
while(i>=1)
{
fact=fact*i;
i--;
}
printf("The factorial is %d\n",fact);
return 0;
}