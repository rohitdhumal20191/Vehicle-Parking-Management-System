#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int Menu();
int remSingle();
void ShowDetail();
void Empty();
void Car();
void Bike();
void Scooter();
void remCar();
void remBike();
void remScooter();

int noCar=0,noBike=0,noScooter=0,amount=0;
int carCount=0, bikeCount=0, scooterCount=0;
int carSpace=5, bikeSpace=7, scooterSpace=10;

int main()
{
	char ch1,ch2,ch3,ch4,ch5;
	int count =0;
	again2:
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
//	clrscr();
	system("cls");
		switch(Menu()){
			case 1:
				Car();
				break;
			case 2:
				Bike();
				break;
			case 3:
				Scooter();
				break;
			case 4:
				ShowDetail();
				break;
			again:
			case 5:
				switch(remSingle()){
					case 1:
						remCar();
						break;
					case 2:
						remBike();
						break;
					case 3:
						remScooter();
						break;
					default:
						printf("\noops...enter correct choice!!!\n");
						goto again;
						break;
				}
				break;
			case 6:
				Empty();
				break;
			case 7:
				printf("\n**************************************************\n\n");
				printf("       Thank you for using our parkking!!!\n\n");
				printf("**************************************************\n\n");
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
	goto again2;
  }
}

int Menu()
{
	printf("**************************************************\n\n");
	printf("Welcome to Rohit`s Parking managemment project !!!\n\n");
	printf("**************************************************\n\n");
	
	printf("vehicle fee for parking :\n");
	printf("car fee : RS.100      bike fee : RS.70 \nscooter fee : RS.50\n");

	
	printf("\nTotal available space in the parking : %d\n",carSpace+bikeSpace+scooterSpace);
	printf("car space : %d	    bike space : %d	\nscooter space : %d\n\n",carSpace, bikeSpace, scooterSpace);

	int cho;
	
	printf("|-------------------------------|\n");
	printf("|	  MAIN MANU             |\n");
	printf("|-------------------------------|");
	printf("\n|1. for park car:               |");
	printf("\n|2. for park bike:              |");
	printf("\n|3. for park scooter:           |");
	printf("\n|4. for show parking status:    |");
	printf("\n|5. for remove any vehicle:     |");
	printf("\n|6. for empty whole parking:    |");
	printf("\n|7. for exit:                   |\n");
	printf("|-------------------------------|");

	printf("\n\n=> enter your choice :\n");
	scanf("%d",&cho);
	return(cho);
}
int remSingle()
{
	int ch;
	printf("1. for remove car:");
	printf("\n2. for remove bike:");
	printf("\n3. for remove scooter:\n");	
	scanf("%d",&ch);
	return(ch);
}

void ShowDetail()
{
	printf("\n number of cars  %d",noCar);
	printf("\n number of bikes : %d",noBike);
	printf("\n number of scooters : %d",noScooter);
	printf("\n total number of vehicles in parking : %d",noCar+noBike+noScooter);
	printf("\n total amount collected : RS.%d",amount);
}

void Empty()
{
	if(noCar>0 || noBike>0 || noScooter>0)
	{
	printf("parking empty successful");
	noCar=0;
	noBike=0;
	noScooter=0;
	amount=0;
//	count=0;
	carSpace=5, bikeSpace=7, scooterSpace=10;
	carCount=0, bikeCount=0, scooterCount=0;
	}else{
		printf("parking is already empty!!!");
	}
}

void Car()
{
	if(carCount<5)
	{
	printf("one car entered successful");
	noCar++;
	amount+=100;
//	count++;
	carCount++;
	carSpace--;
	}else{
		printf("...sorry praking space not available for car");
	}
}	

void Bike()
{
	if(bikeCount<7)
	{
	printf("one bike entered successful");
	noBike++;
	amount+=70;
//	count++;
	bikeCount++;
	bikeSpace--;
	}else{
		printf("...sorry praking space not available for bike");
	}
}

void Scooter()
{
	if(scooterCount<10)
	{
	printf("one scooter entered successful");
	noScooter++;
	amount+=50;
//	count++;
	scooterCount++;
	scooterSpace--;
	}else{
		printf("...sorry praking space not available for scooter");
	}
}

void remCar()
{
	if(noCar>0)
	{
	printf("one car removed successful");
	noCar--;
	amount-=100;
//	count--;
	carCount--;
	carSpace++;	
	}else{
		printf("...sorry there are no cars to remove!!!");
	}
}	

void remBike()
{
	if(noBike>0)
	{
	printf("one bike removed successful");
	noBike--;
	amount-=70;
//	count--;
	bikeCount--;
	bikeSpace++;
 	}else{
		printf("...sorry there are no bikes to remove!!!");
	}
}

void remScooter()
{
	if(noScooter>0)
	{
	printf("one scooter removed successful");
	noScooter--;
	amount-=50;
//	count--;
	scooterCount--;
	scooterSpace++;
	}else{
		printf("...sorry there are no scooter to remove!!!");
	}
}
