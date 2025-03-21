#include<stdio.h>



int getline(char s[], int lim){

    int c, i = 0;

    while(i<lim-1){

        if((c = getchar())!= '\n')
            if(c != EOF)
                {
                    s[i] = c;
                    
                }

        else{
            s[i] = c;
            ++i;
        }
        
    }
    s[i] = '\0';
    
    return i;
}
