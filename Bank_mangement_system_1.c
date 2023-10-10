#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int Menu();
void createAcc();
void depAmount();
void withdrawAmount();
void checkBalance();

struct BANK
{
	int accno;
	char name[50];
	int amount;
};struct BANK A1;

int main(){
	char ch1,ch2,ch3,ch4,ch5;
	int count =0;
	again:
	printf("\nEnter your password :\n");
	ch1=getch();
	printf("*");
	ch2=getch();
	printf("*");
	ch3=getch();
	printf("*");
	ch4=getch();
	printf("*");
	ch5=getch();
	printf("*");
	count++;
	if(ch1='R' && ch2=='o'&& ch3=='h'&& ch4=='i' && ch5=='t')
	{
	while(1)
	{
		system("cls");
		switch(Menu())
		{
			case 1:
				createAcc();
				break;
			case 2:
				depAmount();
				break;
			case 3:
				withdrawAmount();
				break;
			case 4:
				checkBalance();
				break;	
			case 5:
				exit(0);
			default:
				printf("\noops...enter correct choice!!!");
		}
		getch();
	}
  }else{
  	if(count==3){
  		printf("\n\noops...you reach max limit try again later !!!");
  		exit(0);
	  }
	printf("\noops...you entered wrong password!!!");
	goto again;
  }
}

int Menu()
{
	printf("**************************************************\n\n");
	printf("Welcome to Rohit`s Bank managemment project !!!\n\n");
	printf("**************************************************\n\n");
	
	int cho;
	
	printf("|-------------------------------|\n");
	printf("|	  MAIN MANU             |\n");
	printf("|-------------------------------|");
	printf("\n|1. Create Account:             |");
	printf("\n|2. Deposit Amount:             |");
	printf("\n|3. Withdrawal Amount:          |");
	printf("\n|4. Check Balance:              |");
	printf("\n|5. Exit:                       |\n");
	printf("|-------------------------------|");

	printf("\n\n=> enter your choice :\n");
	scanf("%d",&cho);
	return(cho);
}

//password()
//{
//	
//}

void createAcc()
{
	printf("\nEnter Account Number : ");
	scanf("%d",&A1.accno);
	printf("\nEnter Your Name : ");
	scanf("%s",A1.name);
	printf("\nEnter Amount : ");
	scanf("%d",&A1.amount);

	printf("\nyour account is successfuly created !!!");
}

void depAmount()
{
	int depoAmt;
	printf("Enter an amount for deposit : ");
	scanf("%d",&depoAmt);
	if(depoAmt<=0){
		printf("....Enter valid amount!!!");
	}else{
		A1.amount+=depoAmt;
		printf("\nRs.%d is successfuly deposit in your account !!!",depoAmt);
	}
}

void withdrawAmount()
{
	int withdrawAmt;
	printf("Enter an amount for withdrawal : ");
	scanf("%d",&withdrawAmt);
	if(withdrawAmt<=0){
		printf("\n...Enter valid amount!!!");
	}else if(withdrawAmt>A1.amount){
		printf("\n...Insufficient balance!!!");
	}else{
		A1.amount-=withdrawAmt;
		printf("\nRs.%d is successfuly withdrawal from your account !!!",withdrawAmt);
	}	
}

void checkBalance()
{
	printf("\nAccount Number : %d",A1.accno);
	printf("\nName : %s",A1.name);
	printf("\nBalance : %d",A1.amount);
}
