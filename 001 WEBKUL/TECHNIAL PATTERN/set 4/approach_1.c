/*
Input Value : Greater then Equal to 3 and Odd Number.

N = 3

  ***
   e
   e
   e
 *****
   e
   e
   e
*******


N = 5
  
    N
  ***** N
    e
    e
    e  N
    e
    e
 ******* N+2
    e
    e  
    e  N
    e
    e
********* N+4
   N+4
*/

#include<stdio.h>
void pattern(int n) {
    // 1
    printf("  ");
    for(int i=0; i<n; i++) printf("*");
    printf("\n");

    //2
    for(int i=0; i<n; i++) {
        for(int j=0; j<n/2 + 2; j++) {
            printf(" ");
        }
        printf("e\n");
    }

    // 3
    printf(" ");
    for(int i=0; i<n+2; i++) printf("*");
    printf("\n");
    
    //4
    for(int i=0; i<n; i++) {
        for(int j=0; j<n/2 + 2; j++) {
            printf(" ");
        }
        printf("e\n");
    }

    //5
    for(int i=0; i<n+4; i++) printf("*");
    printf("\n");
    

}
int main(){
    int n;
    printf("Enter value of N : ");
    scanf("%d",&n);

    if(n >= 3 && n & 1)
        pattern(n);
    else 
        printf("!Oops wrong input. Please Enter valid input (value must be greater than equal to 3 and Odd number)");

    return 0;
}