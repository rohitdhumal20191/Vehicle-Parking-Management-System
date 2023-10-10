//#include <stdio.h>
//	int main() {
//		int i,totalVehicles,bus=0,car=0,bike=0;
//		
//		printf("Enter number of vehicle you want to add : \n");
//			scanf("%d",&totalVehicles);
//			
//			for(i=1;i<=totalVehicles;i++){
//				int vehicleType;
//				printf("Enter type of vehicle %d :\n",i);
//				printf("1.for Bus 2.for Car 3.for Bike: \n");
//				scanf("%d",&vehicleType);
//				
//				 if(vehicleType==1){
//				 	printf("Enter no. of bus you want to add: \n");
//				 		scanf("%d",&bus);
////				 	bus++;
//				 }else if(vehicleType==2){
//				 	printf("Enter no. of car you want to add: \n");
//				 		scanf("%d",&car);
////				 	car++;
//				 }else if(vehicleType==3){
//				 	printf("Enter no. of bike you want to add: \n");
//				 		scanf("%d",&bike);
////				 	bike++;
//				 }else{
//				 	printf("\nPlese enter valid type !\n\n");
//				 	i--;
//				 }
//			}
//			  int total = bus+car+bike;
//			printf("total number of vehicles are: %d",total);
//			
//	}


//#include <stdio.h>
//
//int main() {
//    int i, totalVehicles, action, bus = 0, car = 0, bike = 0;
//	
//	printf("1. for add the vehicles  2. for remove the vehicles ");
//	scanf("%d",&action);
//	
//	if(action==1){
//		
//    printf("Enter the number of vehicles you want to add: \n");
//    scanf("%d", &totalVehicles);
//	
//    for (i = 1; i <= totalVehicles; i++) {
//        int vehicleType;
//        printf("Enter type of vehicle %d:\n", i);
//        printf("1. for Bus 2. for Car 3. for Bike: \n");
//        scanf("%d", &vehicleType);
//
//        if (vehicleType == 1) {
//            int numBus;
//            printf("Enter the number of buses you want to add: \n");
//            scanf("%d", &numBus);
//            bus += numBus;
//        } else if (vehicleType == 2) {
//            int numCar;
//            printf("Enter the number of cars you want to add: \n");
//            scanf("%d", &numCar);
//            car += numCar;
//        } else if (vehicleType == 3) {
//            int numBike;
//            printf("Enter the number of bikes you want to add: \n");
//            scanf("%d", &numBike);
//            bike += numBike;
//        } else {
//            printf("\nPlease enter a valid type!\n\n");
//            i--; // Allow the user to try again
//        }
//    }
//}
//		int total = bus + car + bike;
//
//		printf("Total number of buses are: %d\n", bus);
//		printf("Total number of cars are: %d\n", car);
//		printf("Total number of bikes are: %d\n", bike);
//    	printf("Total number of vehicles are: %d\n", total);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main() {
//    int i, totalVehicles, action, bus = 0, car = 0, bike = 0,remNumBus,remNumCar,remNumBike,numBus,numCar,numBike;
//	
//	printf("1. for add the vehicles  2. for remove the vehicles ");
//	scanf("%d",&action);
//	
//	if(action==1){
//		
//    printf("Enter the number of vehicles you want to add: \n");
//    scanf("%d", &totalVehicles);
//	
//    for (i = 1; i <= totalVehicles; i++) {
//        int vehicleType;
//        printf("Enter type of vehicle %d:\n", i);
//        printf("1. for Bus 2. for Car 3. for Bike: \n");
//        scanf("%d", &vehicleType);
//
//        if (vehicleType == 1) {
////            int numBus;
//            printf("Enter the number of buses you want to add: \n");
//            scanf("%d", &numBus);
//            bus += numBus;
//        } else if (vehicleType == 2) {
////            int numCar;
//            printf("Enter the number of cars you want to add: \n");
//            scanf("%d", &numCar);
//            car += numCar;
//        } else if (vehicleType == 3) {
////            int numBike;
//            printf("Enter the number of bikes you want to add: \n");
//            scanf("%d", &numBike);
//            bike += numBike;
//        } else {
//            printf("\nPlease enter a valid type!\n\n");
//            i--; // Allow the user to try again
//        }
//    }
//}else if(action == 2){
//	printf("Enter the number of vehicles you want to remove: \n");
//    scanf("%d", &totalVehicles);
//	
//    for (i = 1; i <= totalVehicles; i++) {
//        int vehicleType;
//        printf("Enter type of vehicle %d:\n", i);
//        printf("1. for Bus 2. for Car 3. for Bike: \n");
//        scanf("%d", &vehicleType);
//
//        if (vehicleType == 1 && bus >= remNumBus) {
////            int remNumBus;
//            printf("Enter the number of buses you want to remove: \n");
//            scanf("%d", &remNumBus);
//            bus -= numBus;
//        } else if (vehicleType == 2 && car >= remNumCar) {
////            int remNumCar;
//            printf("Enter the number of cars you want to add: \n");
//            scanf("%d", &remNumCar);
//            car -= numCar;
//        } else if (vehicleType == 3 && bike >= remNumBike) {
////            int remNumBike;
//            printf("Enter the number of bikes you want to add: \n");
//            scanf("%d", &remNumBike);
//            bike -= numBike;
//        } else {
//            printf("\nPlease enter a valid type!\n\n");
//            i--; // Allow the user to try again
//        }
//    }
//}else {
//	printf("\n plese enter a valid action (1 for add , 2 for remove)!\n\n");
//	i--;
//}
//		int total = bus + car + bike;
//
//		printf("Total number of buses are: %d\n", bus);
//		printf("Total number of cars are: %d\n", car);
//		printf("Total number of bikes are: %d\n", bike);
//    	printf("Total number of vehicles are: %d\n", total);
//    return 0;
//}




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
	
FILE *ptr;
//ptr =fopen("vehicle_2.txt","w");
//	fprintf(ptr,"%d\n",noCar);
//	fprintf(ptr,"%d\n",noBike);
//	fprintf(ptr,"%d\n",noScooter);
//	fprintf(ptr,"%d\n",amount);
//	fprintf(ptr,"%d\n",carCount);
//	fprintf(ptr,"%d\n",bikeCount);
//	fprintf(ptr,"%d\n",scooterCount);
//	fprintf(ptr,"%d\n",carSpace);
//	fprintf(ptr,"%d\n",bikeSpace);
//	fprintf(ptr,"%d\n",scooterSpace);


int main()
{
//	FILE *ptr =fopen("vehicle_2.txt","w");
		
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
	int a;
	ptr =fopen("vehicle_2.txt","ab");
	printf("\n number of cars  %d",noCar);
	printf("\n number of bikes : %d",noBike);
	printf("\n number of scooters : %d",noScooter);
	printf("\n total number of vehicles in parking : %d",noCar+noBike+noScooter);
	printf("\n total amount collected : RS.%d",amount);
	fprintf(ptr,"%d\n",noCar);
	fprintf(ptr,"Total no. of Bike : %d\n",noBike);
	fprintf(ptr,"Total no. of Scooter : %d\n",noScooter);
	fprintf(ptr,"total amount collected : %d\n \n",amount);
	fclose(ptr);
	ptr =fopen("vehicle_2.txt","r");
	fscanf(ptr,"%d\n",&a);
	printf("\n%d",a);
	

//	fprintf(ptr," \n");
    
	fclose(ptr);

//	ptr =fopen("vehicle_2.txt","w");
//	fprintf(ptr," ");
//	fclose;
	
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


