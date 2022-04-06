#include<stdio.h>
void main()
{int x;
	printf("Please Enter your id:");
	scanf(" %d",&x);
	switch (x)
	{
		case 1234:
		
			printf("Ahmed\n");
		
		break;
		case 5678:
		
			printf("Youssef\n");
		
		break;
		case 1145:
		
			printf("Mina\n");
		
		break;
	 default:
	
		printf("Wrong id");
	}
}