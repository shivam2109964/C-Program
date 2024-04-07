#include<stdio.h>
#include<math.h>

int main(){
    int p, t, n = 1;
    float a, r;

    for(int i = 1; i <= 10; i++){
        printf("Enter the Initial Amount: \n");
        scanf("%d",&p);

        printf("Enter the interest rate: \n");
        scanf("%f",&r);

        printf("Enter the time period: \n");
        scanf("%d",&t);

        r = r / 100;
        a = p * pow( 1 + r / n , n * t);
        printf("Total Interest Rate = %.2f \n",a);
    }
    return 0;
}