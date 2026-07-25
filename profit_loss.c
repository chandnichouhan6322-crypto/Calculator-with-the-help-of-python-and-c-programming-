=>profit or loss
#include <stdio.h>
 
int main()
{
	int sp,cp;
	printf("enter a sp");
	scanf("%d",&sp);
	printf("enter a cp");
	scanf("%d",&cp);
	if (sp>cp){
		printf("profit%d",sp-cp);
	}
	else if(sp<cp){
		printf("loss%d",cp-sp);
	}
	else{
		
		printf("no loss no gain");
	}

	return 0;
}