//#include <stdio.h>
//
//int main() {
//    int i, totalVehicles, bus = 0, car = 0, bike = 0;
//
//    printf("Enter the number of vehicles you want to manage: \n");
//    scanf("%d", &totalVehicles);
//
//    for (i = 1; i <= totalVehicles; i++) {
//        int action;
//        printf("\nChoose an action for vehicle %d:\n", i);
//        printf("1. Add vehicle 2. Remove vehicle: \n");
//        scanf("%d", &action);
//
//        if (action == 1) { // Add vehicle
//            int vehicleType;
//            printf("Enter type of vehicle %d:\n", i);
//            printf("1. Bus 2. Car 3. Bike: \n");
//            scanf("%d", &vehicleType);
//
//            int numToAdd;
//            printf("Enter the number of vehicles to add: \n");
//            scanf("%d", &numToAdd);
//
//            if (vehicleType == 1) {
//                bus += numToAdd;
//            } else if (vehicleType == 2) {
//                car += numToAdd;
//            } else if (vehicleType == 3) {
//                bike += numToAdd;
//            } else {
//                printf("\nPlease enter a valid vehicle type!\n\n");
//                i--; // Allow the user to try again
//            }
//        } else if (action == 2) { // Remove vehicle
//            int vehicleType;
//            printf("Enter type of vehicle %d to remove:\n", i);
//            printf("1. Bus 2. Car 3. Bike: \n");
//            scanf("%d", &vehicleType);
//
//            int numToRemove;
//            printf("Enter the number of vehicles to remove: \n");
//            scanf("%d", &numToRemove);
//
//            if (vehicleType == 1 && bus >= numToRemove) {
//                bus -= numToRemove;
//            } else if (vehicleType == 2 && car >= numToRemove) {
//                car -= numToRemove;
//            } else if (vehicleType == 3 && bike >= numToRemove) {
//                bike -= numToRemove;
//            } else {
//                printf("\nInvalid removal request or insufficient vehicles of that type!\n\n");
//                i--; // Allow the user to try again
//            }
//        } else {
//            printf("\nPlease enter a valid action (1 for Add, 2 for Remove)!\n\n");
//            i--; // Allow the user to try again
//        }
//    }
//
//    int total = bus + car + bike;
//    printf("\nTotal number of vehicles are: %d\n", total);
//
//    return 0;
//}
//


// ..........................................................................................................


//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//
//int Menu();
//void ShowDetail();
//void Empty();
//void Car();
//void Bike();
//void Scooter();
//
//int noCar=0,noBike=0,noScooter=0,amount=0,count=0;
//int main()
//{
//	while(1)
//	{
////	clrscr();
//	system("cls");
//		switch(Menu()){
//			case 1:
//				Car();
//				break;
//			case 2:
//				Bike();
//				break;
//			case 3:
//				Scooter();
//				break;
//			case 4:
//				ShowDetail();
//				break;
//			case 5:
//				Empty();
//				break;
//			case 6:
//				printf("\n**************************************************\n\n");
//				printf("          Thank you vist again!!!\n\n");
//				printf("**************************************************\n\n");
//				exit(0);
//			default:
//			printf("\noops...enter correct choice!!!");		
//		}
//	getch();
//	}
//}
//
//int Menu()
//{
//	printf("**************************************************\n\n");
//	printf("Welcome to Rohit`s Parking managemment project !!!\n\n");
//	printf("**************************************************\n\n");
//
//	int cho;
//
//	printf("1. for add car:");
//	printf("\n2. for add bike:");
//	printf("\n3. for add scooter:");
//	printf("\n4. for show parking status:");
//	printf("\n5. for empty parking:");
//	printf("\n6. for exit:\n");
//	printf("\nenter your choice :\n");
//	scanf("%d",&cho);
//	return(cho);
//}
//
//void ShowDetail()
//{
//	printf("\n number of cars  %d",noCar);
//	printf("\n number of bikes : %d",noBike);
//	printf("\n number of scooters : %d",noScooter);
//	printf("\n total number of vehicles in parking : %d",count);
//	printf("\n total amount collected : %d",amount);
//}
//
//void Empty()
//{
//	printf("parking empty successful");
//	noCar=0;
//	noBike=0;
//	noScooter=0;
//	amount=0;
//	count=0;
//}
//
//void Car()
//{
//	printf("one car entered successful");
//	noCar++;
//	amount+=100;
//	count++;	
//}	
//
//void Bike()
//{
//	printf("one bike entered successful");
//	noBike++;
//	amount+=70;
//	count++;	
//}
//
//void Scooter()
//{
//	printf("one scooter entered successful");
//	noScooter++;
//	amount+=50;
//	count++;
//}




//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//
//int Menu();
//int remSingle();
//void ShowDetail();
//void Empty();
//void Car();
//void Bike();
//void Scooter();
//void remCar();
//void remBike();
//void remScooter();
//
//int noCar=0,noBike=0,noScooter=0,amount=0,count=0;
//int main()
//{
//	while(1)
//	{
////	clrscr();
//	system("cls");
//		switch(Menu()){
//			case 1:
//				Car();
//				break;
//			case 2:
//				Bike();
//				break;
//			case 3:
//				Scooter();
//				break;
//			case 4:
//				ShowDetail();
//				break;
//			case 5:
//				switch(remSingle()){
//					case 1:
//						remCar();
//						break;
//					case 2:
//						remBike();
//						break;
//					case 3:
//						remScooter();
//						break;
//					default:
//						printf("\noops...enter correct choice!!!");
//				}
//				    break;
//			case 6:
//				Empty();
//				break;
//			case 7:
//				printf("\n**************************************************\n\n");
//				printf("       Thank you for using our parking!!!\n\n");
//				printf("**************************************************\n\n");
//				exit(0);
//			default:
//			printf("\noops...enter correct choice!!!");		
//		}
//	getch();
//	}
//}
//
//int Menu()
//{
//	printf("**************************************************\n\n");
//	printf("Welcome to Rohit`s Parking managemment project !!!\n\n");
//	printf("**************************************************\n\n");
//	
//	printf("car fee : 100      bike fee : 70 \nscooter fee : 50\n\n");
//
//
//	int cho;
//
//	printf("1. for add car:");
//	printf("\n2. for add bike:");
//	printf("\n3. for add scooter:");
//	printf("\n4. for show parking status:");
//	printf("\n5. for remove any vehicle:");
//	printf("\n6. for empty whole parking:");
//	printf("\n7. for exit:\n");
//	printf("\nenter your choice :\n");
//	scanf("%d",&cho);
//	return(cho);
//}
//int remSingle()
//{
//	int ch;
//	printf("1. for remove car:");
//	printf("\n2. for remove bike:");
//	printf("\n3. for remove scooter:\n");	
//	scanf("%d",&ch);
//	return(ch);
//}
//
//void ShowDetail()
//{
//	printf("\n number of cars  %d",noCar);
//	printf("\n number of bikes : %d",noBike);
//	printf("\n number of scooters : %d",noScooter);
//	printf("\n total number of vehicles in parking : %d",count);
//	printf("\n total amount collected : %d",amount);
//}
//
//void Empty()
//{
//	printf("parking empty successful");
//	noCar=0;
//	noBike=0;
//	noScooter=0;
//	amount=0;
//	count=0;
//}
//
//void Car()
//{
//	printf("one car entered successful");
//	noCar++;
//	amount+=100;
//	count++;	
//}	
//
//void Bike()
//{
//	printf("one bike entered successful");
//	noBike++;
//	amount+=70;
//	count++;	
//}
//
//void Scooter()
//{
//	printf("one scooter entered successful");
//	noScooter++;
//	amount+=50;
//	count++;
//}
//
//void remCar()
//{
//	if(noCar>0)
//	{
//	printf("one car removed successful");
//	noCar--;
//	amount-=100;
//	count--;	
//	}else{
//		printf("...sorry there are no cars to remove!!!");
//	}
//}	
//
//void remBike()
//{
//	if(noBike>0)
//	{
//	printf("one bike removed successful");
//	noBike--;
//	amount-=70;
//	count--;
// 	}else{
//		printf("...sorry there are no bikes to remove!!!");
//	}
//}
//
//void remScooter()
//{
//	if(noScooter>0)
//	{
//	printf("one scooter removed successful");
//	noScooter--;
//	amount-=50;
//	count--;
//	}else{
//		printf("...sorry there are no scooter to remove!!!");
//	}
//}


// ..........................................................................................................



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
}

int Menu()
{
	printf("**************************************************\n\n");
	printf("Welcome to Rohit`s Parking managemment project !!!\n\n");
	printf("**************************************************\n\n");
	
	printf("vehicle fee for parking :\n");
	printf("car fee : $100      bike fee : $70 \nscooter fee : $50\n\n");
	
	printf("Total available space in the parking : %d\n",carSpace+bikeSpace+scooterSpace);
	printf("car space : %d	    bike space : %d	\nscooter space : %d\n\n",carSpace, bikeSpace, scooterSpace);

	int cho;

	printf("1. for park car:");
	printf("\n2. for park bike:");
	printf("\n3. for park scooter:");
	printf("\n4. for show parking status:");
	printf("\n5. for remove any vehicle:");
	printf("\n6. for empty whole parking:");
	printf("\n7. for exit:\n");
	printf("\nenter your choice :\n");
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
	printf("\n total amount collected : $%d",amount);
}

void Empty()
{
	printf("parking empty successful");
	noCar=0;
	noBike=0;
	noScooter=0;
	amount=0;
//	count=0;
	carSpace=5, bikeSpace=7, scooterSpace=10;
	carCount=0, bikeCount=0, scooterCount=0;
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
