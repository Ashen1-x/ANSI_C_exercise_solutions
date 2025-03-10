#include<stdio.h>

double fahrenheit_to_celsius(double fahrenheit) {

    return(fahrenheit -32) * 5.0/9.0;


}

int main(){


    double fahrenheit;

    printf("Enter temperature in fahrenheit, please: ");
    scanf("%lf", &fahrenheit);

    printf("Temp in Celsius: %.2f\n", fahrenheit_to_celsius(fahrenheit));
    return 0;


}