#include "main.h"

int main(int argc, char*argv[]){

  printf("Welcome to Paul's Gas Cost calculator! :D\n ");

  printf("© Paul Ryan Olivar. \n All rights reserved \n");

    
    int f = 0;
    
    
  //initialize variables
    double mileage, price, miles, actualCost = 0;
    
    //enter price of gas
    
    if (argv[1] == NULL){
    printf("Please enter the price of gas \n");
    while (scanf("%lf",&price) <= 0){
        
        printf("Please enter a valid number \n");
    }
    }
    else{
        price = atof(argv[1]);
    }
    printf("Price is %lf \n", price);

    //enter price of mileage
    
    
    printf("Please enter the mileage of your car \n");
    while (scanf("%lf", &mileage) < 0){
        
        printf("Please enter a valid number \n");
        
    }
    printf("Mileage is %lf \n", mileage);
    
    
    //enter miles travelled
    
    
    printf("Please enter the amount of miles travelled/will travel \n");
    while (scanf("%lf", &miles) < 0){
        
        printf("Please enter a valid number \n");
        
    }
    
   
   
    
    
   actualCost =  calculate(mileage, price, miles);
    
    
    printf("The cost to drive %.2f miles at %.2f miles per gallon is %.2f \n", miles, mileage, actualCost);
    
    
    return EXIT_SUCCESS;
    
    
}
