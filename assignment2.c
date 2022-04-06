#include<stdio.h>
void main()
{
	int ID,password;
printf("please Enter your ID");
scanf(" %d", &ID);

if(ID==1234&&ID==5678&&ID==9870)
{
	
	printf("please Enter youur password");
scanf(" %d", &password);
}
if(ID==1234&&password==7788)
{
	printf("Welcome Ahmed");	
}
else if(ID==5678&&password==5566)
{
	printf("Welcome amr");	
}
else if(ID==9870&&password==1122)
{
	printf("Welcome wael");	
}
//}

	if(password!=7788&&password!=5566&&password!=1122)
	{
		for(int i=0;i<=2;i++)
		{
			printf("try again:");
			scanf(" 5d",password);
			if(ID==1234&&password==7788)
			{
				break;
			}
			else if(ID==5678&&password==5566)
           {
	     break;	
           }
		   else if(ID==9870&&password==1122)
            {
				break;
		}
		 }
			printf("No more tries");
	break;
}
		}
	}

if(ID!=1234&&ID!=5678&&ID!=9870)
{
	printf("you are registered");
}


