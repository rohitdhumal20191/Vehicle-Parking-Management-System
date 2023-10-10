#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define n 2


int Menu();
void createAcc();
void depAmount();
void withdrawAmount();
void checkBalance();
void displayAll();


struct BANK
{
	int accno;
	char name[50];
	int amount;
};struct BANK A1[n];

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
				displayAll();
				break;	
			case 6:
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
	printf("\n|5. Display All Details:        |");
	printf("\n|6. Exit:                       |\n");
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
	int i;
	for(i=1;i<=n;i++)
	{
		printf("\nEnter Account Number : ");
		scanf("%d",&A1[i].accno);
		printf("\nEnter Your Name : ");
		scanf(" %[^\n]",A1[i].name);
		printf("\nEnter Amount : ");
		scanf("%d",&A1[i].amount);
	}
	printf("\nyour account is successfuly created !!!");
}

void displayAll()
{
	int i;
//	printf("\nAcc No.\t\tName\t\tBlancce\n");
	for(i=1;i<=n;i++)
	{
		printf("\nAccount no. : %d",A1[i].accno);
		printf("\nName : %s",A1[i].name);
		printf("\nYour blance : %d",A1[i].amount);
//		printf("\n%d",A1[i].accno);
//		printf("\t  %s",A1[i].name);
//		printf("\t\t%d",A1[i].amount);
		printf("\n");
	}
}

void depAmount()
{
	int i, f=0, accNo, depoAmt;

	printf("\nEnter an account Number : ");
	scanf("%d",&accNo);
	for(i=1;i<=n;i++)
	{
		if(A1[i].accno==accNo)
		{
			f=1;
			printf("Name : %s",A1[i].name);
			printf("\nEnter an amount for deposit : ");
			scanf("%d",&depoAmt);
			if(depoAmt<=0){
			printf("....Enter valid amount!!!");
			}else{
				A1[i].amount+=depoAmt;
				printf("\n%s Rs.%d is successfuly deposit in your account [acc no.: %d]",A1[i].name,depoAmt,A1[i].accno);
				}
		}	
	}
		if(f==0)
		{
			printf("\n...Please enter valid account number!!!");
		}
	
}

void withdrawAmount()
{
	int i, f=0, accNo, withdrawAmt;

	printf("\nEnter an account Number : ");
	scanf("%d",&accNo);
	for(i=1;i<=n;i++)
	{
		if(A1[i].accno==accNo)
		{
			f=1;
			printf("Name : %s",A1[i].name);
			printf("\nEnter an amount for withdrawl : ");
			scanf("%d",&withdrawAmt);
			if(withdrawAmt<=0 || withdrawAmt>A1[i].amount){
			printf("....Enter valid amount or Insufficent blance!!!");
			}else{
				A1[i].amount-=withdrawAmt;
				printf("\n%s Rs.%d is successfuly withdrawl from your account [acc no.: %d]",A1[i].name,withdrawAmt,A1[i].accno);
				}
		}	
	}
		if(f==0)
		{
			printf("\n...Please enter valid account number!!!");
		}
}

void checkBalance()
{
	int i, f=0, accNo;

	printf("\nEnter an account Number : ");
	scanf("%d",&accNo);
	for(i=1;i<=n;i++)
	{
		f=1;
		if(A1[i].accno==accNo)
		{
		printf("\nAccount Number : %d",A1[i].accno);
		printf("\nName : %s",A1[i].name);
		printf("\nBalance : %d",A1[i].amount);
		}
	}
		if(f==0)
		{
			printf("\n...Please enter valid account number!!!");
		}
}
