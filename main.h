#include <stdio.h>
#include <stdlib.h>

double calculate(double mileage, double costPerGal, double milesTraveled){
    
    double price = (double)(milesTraveled/mileage) *costPerGal;
    
    
    printf("Price is %.2f \n", price);
    return price;
    
}