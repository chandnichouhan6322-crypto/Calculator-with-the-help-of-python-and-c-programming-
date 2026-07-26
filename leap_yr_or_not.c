=>leap year or not
#include <stdio.h>
 
int main()
{
	int year;
	printf("enter a year");
	scanf("%d",&year);
	if (year%4==0){
		printf("leap year...%d:",year);
	}	
	else if(year%4!=0){
		printf("not a leaf year ..%d",year);
	}
	else{
		printf("it may be a character");	
        }
	return 0;
}