=>divisible by 5 c programming 
#include <stdio.h>
 
int main()
{
	int a;
	printf("enter a no ");
	scanf("%d",&a);
	if (a%5==0){
		printf("it is divisible by 5%d",a);
	}	
	else if(a%5!=0){
		printf("it is not divisible by 5%d",a);
	}
	else{
		printf("it may be a character");	
        }
	return 0;
}