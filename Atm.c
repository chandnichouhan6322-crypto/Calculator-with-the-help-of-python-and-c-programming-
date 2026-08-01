#include <stdio.h>
int main(){
		float bal=1000;
		float deposit;
		float withdraw;
	    int pin=1233;
	    int enterpin;
		printf("enter a pin ");
		scanf("%d",&enterpin);
		if(enterpin==pin){
			printf("unlocked \n END");
			
		}
		else{
			for(int i=1;i<=3;i++){}
				printf("locked");
			}
		int choice=0;
		while(choice!=4){
			printf("-----------ATM----------\n");
			printf("1 Check balance \n 2 Deposite\n 3 Withdrawl \n 4 exit \n");
			printf("enter a choice");
		    scanf("%d",&choice);
		    
			if (choice==1){
				printf("okh! you want to check your balance");
				printf("\n your balance is----%.2f",bal);}
				else if(choice==2){
					printf("okh! you want to deposite money");
					printf("\nenter your deposit");
					scanf("%f",&deposit);
					bal=bal+deposit;
					printf("you deposited---%.2f",deposit);
					printf("\nNow your total deposit is----%.2f",bal);}
				else if(choice==3){
					printf("okh! you want to withdrew money");
					printf("\nenter withdrawl amt");
					scanf("%f",&withdraw);
					
					if(withdraw<=bal){
					
					    printf("\nwithdrawl done");
					    bal=bal-withdraw;
					    }
					  else{
					  	printf("insufficient bal");}
					printf("new balance%.2f",bal);
				}
				else if( choice==4){
					printf("okh! you want to exist");
				}
				else{
					printf("invalid choice");
				}}
		
			return 0;
		}
