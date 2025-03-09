#include<stdio.h>

int main(){


    int c;

    while((c = getchar()) != EOF)
        putchar(c);

    printf("EOF is here. The value of EOOF is: %d\n", EOF);
    return 0;


}