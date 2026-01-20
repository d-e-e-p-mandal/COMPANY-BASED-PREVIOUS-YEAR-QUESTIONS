
/*

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
import java.util.*;
class Pattern {
    public void pattern(int n) {
        int i,j;
        for(i=0;i<(n/2)+1;i++){
            for(j=0; j<n/2+1; j++) { 
                System.out.print(" ");
            }
            for( j=0;j<(n/2)-i;j++){
                System.out.print(" ");
            }
            for( j=0;j<2*i+1;j++){
                System.out.print("*");
            }
            System.out.println();
        }

        for( i=0;i<n;i++){
            for(j=0; j<n/2; j++) {
                System.out.print(" ");
            }
            for( j=0;j<n/2+1;j++){ // plus one 
                System.out.print(" ");
            }
            
            System.out.println("@");
        }

        for(i=0;i<n;i++){
            for(j=0; j<n/2; j++) {
                System.out.print(" ");
            }
            for(j=0;j<n+2;j++){
                if(i==0||j==0||j==n+1){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        // buttom part
        for(i=0;i<n/2+1;i++){
            for(j=0;j<n*2+1;j++){
                if(j>=i && j<=n-1-i || j>=n+1+i && j<=n*2-i){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter N : ");

        int n = sc.nextInt();

        Pattern p = new Pattern();

        p.pattern(n);
    }
}