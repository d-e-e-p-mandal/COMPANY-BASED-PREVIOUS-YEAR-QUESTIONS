/*
 N = 5
     *
    ***
   *****
     @
     @
     @
     @
     @
  *******
  *     *
  *     *
  *     *
  *     *
***** *****
 ***   *** 
  *     *  
  

N = 7
       *
      ***
     *****
    *******
       @
       @
       @
       @
       @
       @
       @
   *********
   *       *
   *       *
   *       *
   *       *
   *       *
   *       *
******* *******
 *****   ***** 
  ***     ***  
   *       *   
*/

#include<stdio.h>
void pattern(int n) {
    // uppar part
    for(int i=0; i<n/2+1; i++) {
        for(int j=0; j<n/2+1; j++) {
            printf(" ");
        }

        for(int j=0; j<(n/2)-i; j++) {
            printf(" ");
        }
        for(int j=0; j<2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // mid @ part
    for(int i=0; i<n; i++) {
        for(int j=0; j<n/2+1; j++) {
            printf(" ");
        }
        for(int j=0; j<n/2; j++) {
            printf(" ");
        }
        printf("@\n");
    }

    // mid box part

    for(int i=0; i<n; i++) {
        for(int j=0; j<n/2; j++) {
            printf(" ");
        }
        for(int j=0; j<n+2; j++) {
            if(i==0 || j==0 || j == n+1){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    // buttom part
    // 1
    for(int i=0; i<n/2+1; i++) {
        // for
        for(int j=0; j<i; j++) {
            printf(" ");
        }
        for(int j=0; j<n-2*i; j++) {
            printf("*");
        }
        for(int j=0; j<i+1; j++) {
            printf(" ");
        }

        //2
        for(int j=0; j<i; j++) {
            printf(" ");
        }
        for(int j=0; j<n-2*i; j++) {
            printf("*");
        }
        for(int j=0; j<i; j++) {
            printf(" ");
        }
        printf("\n");
    }


}
int main() {

    int n;
    printf("Enter N : ");
    scanf("%d", &n);

    pattern(n);
    return 0;
}

/*
Output :
Enter N : 5
     *
    ***
   *****
     @
     @
     @
     @
     @
  *******
  *     *
  *     *
  *     *
  *     *
***** *****
 ***   *** 
  *     *  
*/