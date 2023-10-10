#include <stdio.h>

int main() {
    int i,totalVehicles, numBuses = 0, numCars = 0, numBikes = 0;

    printf("Enter the total number of vehicles you want to add: ");
    scanf("%d", &totalVehicles);

    for (i = 0; i < totalVehicles; i++) {
        int vehicleType;
        printf("\nEnter the type of vehicle for vehicle %d:\n", i + 1);
        printf("1 for Bus, 2 for Car, 3 for Bike: ");
        scanf("%d", &vehicleType);

        if (vehicleType == 1) {
            numBuses++;
        } else if (vehicleType == 2) {
            numCars++;
        } else if (vehicleType == 3) {
            numBikes++;
        } else {
            printf("Invalid choice. Please enter 1 for Bus, 2 for Car, or 3 for Bike.\n");
            i--; // Decrement i to re-enter the choice
        }
    }

    printf("\nTotal number of vehicles: %d\n", totalVehicles);
    printf("Number of buses: %d\n", numBuses);
    printf("Number of cars: %d\n", numCars);
    printf("Number of bikes: %d\n", numBikes);

    return 0;
}


//#include <stdio.h>
//
//int main() {
//    int numBuses = 0, numCars = 0, numBikes = 0;
//    int i,totalVehicles;
//
//    printf("How many vehicles do you want to add?\n");
//    scanf("%d", &totalVehicles);
//
//    for (i = 0; i < totalVehicles; i++) {
//        int choice;
//        printf("\nEnter the type of vehicle for vehicle %d:\n", i + 1);
//        printf("1. Bus\n2. Car\n3. Bike\nEnter your choice: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//            case 1:
//                numBuses++;
//                break;
//            case 2:
//                numCars++;
//                break;
//            case 3:
//                numBikes++;
//                break;
//            default:
//                printf("Invalid choice. Please enter 1 for Bus, 2 for Car, or 3 for Bike.\n");
//                i--; // Decrement i to re-enter the choice
//        }
//    }
//
//    printf("\nTotal number of vehicles: %d\n", totalVehicles);
//    printf("Number of buses: %d\n", numBuses);
//    printf("Number of cars: %d\n", numCars);
//    printf("Number of bikes: %d\n", numBikes);
//
//    return 0;
//}

