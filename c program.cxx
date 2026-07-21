#include<stdio.h>
int main()
{
	float l,b;
	printf("enter a l");
	scanf("%f",&l);
	printf("enter a b");
	scanf("%f",&b);
	float area=l*b;
	float perimeter=2*l+b;
	if (area<perimeter){
		printf("perimeter is greater than area ");
	}
	else{
		printf("perimeter is lower than area");
	}
	

	return 0;
}