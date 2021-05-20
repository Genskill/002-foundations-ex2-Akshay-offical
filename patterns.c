#include<stdio.h>
#include<cs50.h>


int main(void)
{
    int a = get_int("Enter type of pattern (1 or 2) ");
    int b = get_int("Number of rows");
    if (a == 1) {
        while (b != 0) {
            for (int i = 0; i < b; i++) {
                printf("#");
            }
            printf("\n");
            n--;
        }
 }

  else if(a==2){
  for(int i=1; i<=b; i++){
    for(int j=1; j<=b-i; j++){
       printf(" ");
     }
    for(int k=1; k<=i;k++){
     printf("#");
    }
   printf("\n");
   }
  }
}
