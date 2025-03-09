#include<stdio.h>

 int main(){

    int fahr;

     for(fahr = 300; fahr >= 0; fahr = fahr-20)
         printf("%3d %6.1f\n", fahr,(5.0/9.0) * (fahr - 32) );

 }
// main(){
//     int fahr = 300;
//     int x = 32;

//     float cel = ((fahr-32) / 1.8);
//     printf("%.2f", cel);
// }