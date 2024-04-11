#include<stdio.h>
int main()
{
    int p,n,r,SI;
    printf("Enetr the principal value");
    scanf("%d",&p);

     printf("Enetr the interest rate");
     scanf("%d",&r); 

      printf("Enetr the no.of years");
      scanf("%d",&n);

      SI=p*n*r/100;
      printf("SI is: %d",SI);
      return 0;


}