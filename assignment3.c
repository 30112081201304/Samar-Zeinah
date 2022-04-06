#include<stdio.h>
void main()  
{  
      
    int i, j, hieght, k = 0;  
    printf (" pleasr Enter the hieght of the pyramid: \n");  
    scanf ("%d", &hieght);   
      
    for ( i =1; i <=hieght ; i++)  
    {  
        for ( j = 1; j <= hieght - i; j++)  
        {  
            printf ("  ");   
        }  
          
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); 
        }  
        printf ("\n");  
    }  
   
}  