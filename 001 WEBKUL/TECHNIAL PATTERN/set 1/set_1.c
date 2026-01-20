/*
Input Value : Greater then Equal to 3 and Odd Number.
N = 3
eeee***
e    *
e    e
e    e
e    e

N = 5
     *****
eeeeee***
e      *
e      e
e      e
e      e
e      e
e      e


N = 7 
         N
      *******  
       *****
eeeeeeee***
e        *
e        e
e N+2    e
e        e  N
e        e
e        e
e        e
e        e       
    N+3


*/
#include<stdio.h>
void pattern(int n) {
    // uppar part
    int x = (n-3)/2;
    for(int i=0; i<x; i++){
        for(int j=0; j<=n+i-x; j++) {
            printf(" ");
        }

        for(int j=0; j<n - (2*i); j++) {
            printf("*");
        }
        printf("\n");
    }

    // middle part
    for(int i=0; i<2; i++) {
        if(i==0) {
            for(int j=0; j<=n; j++) {
                printf("e");
            }
            for(int j=0; j<3; j++) {
                printf("*");
            }
            printf("\n");
        }
        else {
            for(int j=0; j<n+3; j++) {
                if(j==0) printf("e");
                else if(j == n+2) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
    }
    
    // lower part
    for(int i=0; i<n; i++) {
        for(int j=0; j<n+3; j++) {
                if(j==0) printf("e");
                else if(j == n+2) printf("e");
                else printf(" ");
            }
            printf("\n");
    }

}

int main() {

    int n;
    printf("Enter value of N : ");
    scanf("%d",&n);

    if(n & 1 && n >= 3)
        pattern(n);
    else 
        printf("!Oops wrong input. Please Enter valid input (value must be greater than equal to 3 and Odd number)");

    return 0;
}