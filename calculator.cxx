"calculator by c programming 
#include <stdio.h>
int main(){
	int a;
	printf("enter a number");
	scanf(" %d",&a);
	
	int b;
	printf("enter b number");
	scanf(" %d",&b);
	
	char c;
	printf("enter c operator");
	scanf(" %c",&c);
	
if (c == "+"){
	printf("addition =%d",a+b);
}
else if (c=="-"){
	printf("sub= %d",a-b);
}
else if(c=="*"){
	printf("multiple= %d",a*b);
}
else if(c=="/"){
	printf("division =%d",a/b);
}
else{
	printf("something wrong");
}
return 0;
}