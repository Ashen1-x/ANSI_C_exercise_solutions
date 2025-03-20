#include<stdio.h>

int fahr_to_cels(int fahr, double cels){
    int f;
    double c;

    printf("Enter the temp in F*: ", f);
    scanf("%d", &f);
    printf("Fahrenheit\tCelsius\n%3d\t\t%6.1lf\n",f, c = ((5.0/9.0) * (f - 32.0)));

    


}


int cels_to_fahr(double cels, int fahr){
    int f;
    double c;

    printf("Enter the temp in C*: ", c);
    scanf("%lf", &c);

    printf("Celsius\tFahrenheit\n%6.1lf\t\t%3d\n", c, f = ((c * 9.0/5.0) + 32.0));



}


int main(){

    int fahr;
    double cels;
    int ans;

    while(1){

        printf("press 1 for f2c |or| 0 for c2f |or| cntrl + c to exit: ", ans);
        scanf("%d", &ans);

        if(ans == 1){


            fahr_to_cels(fahr, cels);
        }


        else{
            cels_to_fahr(cels, fahr);
        }







    }



    return 0;





}