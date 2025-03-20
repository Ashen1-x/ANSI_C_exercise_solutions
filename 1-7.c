#include<stdio.h>

int main(){


    int c = 10;
    int *ptr;
    ptr = &c;

    printf("Address of c: %p\n", &c);
    printf("Value of ptr: %p\n", ptr);
    printf("Value of c: %d\n", c);
    printf("Value pointed to by ptr: %d\n", *ptr);
    return 0;

    // while((c = getchar()) != EOF)
    //     putchar(c);

    // printf("EOF is here. The value of EOOF is: %d\n", EOF);
    // return 0;


}