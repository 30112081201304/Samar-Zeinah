#include<stdio.h>
void main(){
	int ID,password;
	printf("please Enter your ID:");
	scanf(" %d", &ID);
	if(ID==100040)
	{
		printf("please Enter your password:");
	    scanf(" %d", &password);
	
	if(password==1245)
	{
		printf("samar Zeinah");
	}
	}
	else if (password!=1245)
	{
		printf("incorrect password");
	
	}
	else if(ID!=100040)
	{
		printf("incorrect ID");
	}
 }
