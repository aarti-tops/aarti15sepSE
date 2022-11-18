//use of scanf function.

#include<stdio.h>
int main()
{
	int a;
	printf("enter the nuber :");
	scanf("%d",&a);
	
	if(a<100)
	{
		printf("\nnuber is less then 100 ");
		
    }   
	else
	{
		printf("\nnumber is contains more than two digits");
    } 
	
	return 0;  
} 
